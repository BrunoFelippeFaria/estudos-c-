#include <iostream>
#include <ostream>

int main(){
    //tabuada com for
    int num;
    std::cout << "digite um numero: ";
    std::cin >> num;

    for(int i=1; i < 11; i++){
        std::cout << num << " x " << i << " = " << num*i << std::endl;
    }

    return 0;
}