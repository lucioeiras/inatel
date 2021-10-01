#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c) {
  float delta = pow(b, 2) - 4 * a *c;
  return delta;
}

int main() {
  float a, b, c;
  cin >> a >> b >> c;

  float delta = calc_delta(a, b, c);

  cout << fixed << setprecision(2);
  cout << "delta = " << delta << endl;

  return 0;
}