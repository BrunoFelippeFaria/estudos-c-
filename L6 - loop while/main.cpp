#include <iostream>
#include <ostream>

int main(){
    //tabuada com while
    int num;
    std::cout << "digite um numero: ";
    std::cin >> num;

    int i = 0;

    while (i < 10){
        i++;
        std::cout << num << " x " << i << " = " << num*i << std::endl;
    }

    return 0;
}