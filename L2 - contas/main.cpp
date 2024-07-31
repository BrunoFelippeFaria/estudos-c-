#include <iostream>
#include <ostream>

int main(){
    //soma
    int num1 = 10;
    int num2 = 10;
    
    std::cout <<  num1 << " + " << num2 << " = " << num1+num2;
    std::cout << std::endl; //comando para pular linha 

    //subtração
    num1 = 50;
    num2 = 10;

    std::cout <<  num1 << " - " << num2 << " = " << num1-num2;
    std::cout << std::endl;

    //mutiplicação

    num1 = 5;
    num2 = 10;

    std::cout <<  num1 << " x " << num2 << " = " << num1*num2;
    std::cout << std::endl;

    //divisão

    num1 = 50;
    num2 = 2;

    std::cout <<  num1 << " / " << num2 << " = " << num1/num2;
    std::cout << std::endl;

    return 0;
}