#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  char operation;
  cin >> operation;

  switch (operation) {
    case '+':
      cout << (x + y) << endl;
    break;
    case '-':
      cout << (x - y) << endl;
    break;
    case '*':
      cout << (x * y) << endl;
    break;
    case '/':
      if (y == 0) {
        cout << "Impossivel" << endl;
        break;
      }

      cout << fixed << setprecision(1);
      cout << (x * 1.0 / y) << endl;
    break;
  }
}