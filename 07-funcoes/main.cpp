#include <iostream>
#include <ostream>

//função que retorna um inteiro
int soma(int a, int b){
    return a+b;
}

//função sem retorno
void olaMundo(){
    std::cout << "olá mundo!\n";
} 

int main(){
    std::cout << soma(20, 48) << std::endl;
    olaMundo(); 
    return 0;
}