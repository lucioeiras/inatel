#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calc_volume(double radius) {
  double volume = 4.0 / 3.0 * 3.14 * pow(radius, 3);
  return volume;
}

int main() {
  double radius;
  cin >> radius;

  double volume = calc_volume(radius);

  cout << fixed << setprecision(2);
  cout << volume << endl;

  return 0;
}