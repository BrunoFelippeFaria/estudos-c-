#include <iostream>
#include <string>
using namespace std;

int main() {
  int maxTentativas = 4;
  int tentativa = 0;

  string senhaCorreta = "1234";
  string senha;

  string semCor = "\033[0m";
  string corVerde = "\033[32m";
  string corVermelho = "\033[31m";

  while (true) {
    cout << "senha: ";
    cin >> senha;
    tentativa += 1;

    if (tentativa >= maxTentativas) {
      cout << corVermelho << "suas tentativas se esgotaram :(" << semCor
           << "\n";
      break;
    }

    if (senha == senhaCorreta) {
      cout << corVerde << "senha correta!" << semCor << "\n";
      break;
    } else {
      cout << corVermelho << "senha incorreta!" << semCor << "\n";
    }
  }

  return 0;
}
