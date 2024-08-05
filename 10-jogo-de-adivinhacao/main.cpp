#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // variaveis
  srand(time(0));
  int randNum = rand() % 100 + 1;
  int tentativas = 0;
  // cores
  string corVerde = "\033[32m";
  string corVermelho = "\033[31m";
  string corAzul = "\033[34m";
  string semCor = "\033[0m";

  cout << "====================================" << "\n";
  cout << corAzul << "tente adivinhar o número de 1 a 100" << semCor << "\n";
  cout << "====================================" << "\n";

  while (true) {
    int num;
    cout << "escolha um número: ";
    cin >> num;
    tentativas += 1;
    // caso o usuario coloque uma letra
    if (cin.fail()) {
      cin.clear();
      cin.ignore();
      cout << "porfavor digite um número!\n";
      continue;
    }

    // verifica se o usuario acertou ou não, e dá dicas se ele errar
    if (num == randNum) {
      cout << corVerde << "parabéns! você acertou em " << tentativas
           << " tentativas!" << semCor << "\n";
      break;
    } else if (randNum < num) {
      cout << corVermelho << "o número é menor do que " << num << "!" << semCor
           << "\n";
    } else if (randNum > num) {
      cout << corVermelho << "o número é maior do que " << num << "!" << semCor
           << "\n";
    }
  }
  // pausa o programa no windows, assim o programa não fecha instantaneamente
  // após a vitoria
#ifdef WIN32
  system("pause");
#endif

  return 0;
}
