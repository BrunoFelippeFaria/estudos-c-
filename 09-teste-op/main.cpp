#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  // opções
  string opts[] = {"-t", "-o", "-f", "-v", "-h"};

  bool opt_t = false;
  bool opt_o = false;
  bool opt_f = false;
  bool opt_v = false;
  bool opt_h = false;
  // loop dos argumentos
  for (int i = 0; i < argc; i++) {
    // para cada argumento passado, o loop vai verificar se o argumento
    // corresponde a uma opção
    for (size_t o = 0; o < sizeof(opts) / sizeof(opts[0]); o++) {
      // verifica se o argumento atual corresponde a uma opção
      size_t found = string(argv[i]).rfind(opts[o]);
      if (found != string::npos) {
        string sargv = string(argv[i]);
        // se o argumento corresponde a uma opção, ela recebe verdadeiro
        if (sargv == "-t") {
          opt_t = true;
        } else if (sargv == "-o") {
          opt_o = true;
        } else if (sargv == "-f") {
          opt_t = true;
        } else if (sargv == "-v") {
          opt_v = true;
        } else if (sargv == "-h") {
          opt_h = true;
        }
      }
    }
  }

  // cada opção tem um if que vai se ativar caso ela seja verdadeiro
  if (opt_t) {
    cout << "opção t ativada!" << "\n";
  }

  if (opt_o) {
    cout << "opção o ativada!" << "\n";
  }

  if (opt_f) {
    cout << "opção f ativada!" << "\n";
  }

  if (opt_v) {
    cout << "opção v ativada!" << "\n";
  }

  if (opt_h) {
    cout << "opção h ativada!" << "\n";
  }

  return 0;
}
