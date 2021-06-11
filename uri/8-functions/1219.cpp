#include <iostream>

using namespace std;

int sinal(int n) {
  return (n == 0) ? 0 : ((n > 0) ? 1 : -1);
}

int main() {
  int n;
  cin >> n;

  int sign = sinal(n);

  switch (sign) {
    case (0):
      cout << "Zero" << endl;
    break;

    case (1):
      cout << "Positivo" << endl;
    break;

    case (-1):
      cout << "Negativo" << endl;
    break;
  }

  return 0;
}