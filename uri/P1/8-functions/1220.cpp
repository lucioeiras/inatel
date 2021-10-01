#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x) {
  int a = 2 * pow(x, 2) + 3 * x - 1;
  return a;
}

int calc_b(int x) {
  int b = pow(x, 3);
  return b;
}

int calc_c(int y) {
  int c = pow(y, 3);
  return c;
}

int main() {
    int x, y;
    cin >> x >> y;

    int a = calc_a(x); 
    cout << "a = " << a << endl;

    int b = calc_b(x);
    cout << "b = " << b << endl;

    int c = calc_c(y);
    cout << "c = " << c << endl;

    return 0;
}