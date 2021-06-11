#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c) {
  float delta = pow(b, 2) - 4 * a *c;
  return delta;
}

int calc_raizes(float a, float b, float c, float &x1, float &x2) {
  float delta = calc_delta(a, b, c);

  if (delta < 0) {
    return 1;
  }

  x1 = (-1 * b - sqrt(delta)) / (2 * a);
  x2 = (-1 * b + sqrt(delta)) / (2 * a);

  return 0;  
}

int main() {
  float a, b, c;
  cin >> a >> b >> c;

  float x1 = 0, x2 = 0;
  int result = calc_raizes(a, b, c, x1, x2);

  if (result == 1) {
    cout << "Nao ha raizes reais" << endl;
    return 0;
  }

  if (x1 == x2) {
    cout << fixed << setprecision(2);
    cout << "x = " << x2 << endl;

    return 0;
  }

  cout << fixed << setprecision(2);
  cout << "x1 = " << x1 << endl;

  cout << fixed << setprecision(2);
  cout << "x2 = " << x2 << endl;

  return 0;
}