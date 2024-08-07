#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<float> notas;
  float soma = 0;
  int contador = 0;

  while (true) {
    contador += 1;
    int nota;
    cout << "nota " << contador << " : ";
    cin >> nota;

    if (nota == -1) {
      break;
    }

    notas.push_back(nota);
  }

  for (int i = 0; i < notas.size(); i++) {
    soma += notas[i];
  }

  float media = soma / notas.size();

  cout << "a media do aluno é : " << media << "\n";

  return 0;
}
