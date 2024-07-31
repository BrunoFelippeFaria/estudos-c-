#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>

int main(){
    std::srand(std::time(0)); //usa o timer do sistema como semente para gerar numeros aleatorios
    int rand = std::rand() % 10 + 1; 

    std::cout << rand << std::endl;

    return 0;
}

/*
    nota

    os comandos srand, time e rand, não precisam do std::, mas usar o std:: evita conflitos.
    por exemplo, nesse codigo eu pude usar rand como uma variavel, sem conflitar com a função rand

*/