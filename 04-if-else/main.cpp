#include <iostream>

int main(){
    int nota;
    std::cout << "nota : ";
    std::cin >> nota;

    if(nota >= 5){
        std::cout << "passou\n";
    }

    else{
        std::cout << "reprovou\n";
    }

    return 0;
}