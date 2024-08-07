#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int a, b, c;
  cout << "a : ";
  cin >> a;
  cout << "b : ";
  cin >> b;
  cout << "c : ";
  cin >> c;

  int delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    cout << "delta negativo!\n";
    return 0;
  }

  float x1 = ((-b) + sqrt(delta)) / (2 * a);
  float x2 = ((-b) - sqrt(delta)) / (2 * a);

  cout << "x1 : " << x1 << "\n";
  cout << "x2 : " << x1 << "\n";

  return 0;
}
