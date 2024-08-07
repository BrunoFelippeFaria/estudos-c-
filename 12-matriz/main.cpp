#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int colunas, linhas;

  cout << "colunas : ";
  cin >> colunas;

  cout << "linhas : ";
  cin >> linhas;

  int numeros[colunas][linhas];

  for (int l = 0; l < linhas; l++) {
    for (int c = 0; c < colunas; c++) {
      cout << "coluna " << c + 1 << " linha " << l + 1 << ": ";
      cin >> numeros[l][c];
    }
  }

  system("clear");

  for (int l = 0; l < linhas; l++) {
    for (int c = 0; c < colunas; c++) {
      cout << numeros[l][c] << " ";
    }
    cout << "\n";
  }

  return 0;
}
