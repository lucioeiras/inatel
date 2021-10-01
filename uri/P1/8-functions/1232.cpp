#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K) {
  C = (F - 32) / 1.8;
  K = C + 273;
}

int main() {
  float fahrenheit, celsius, kelvin;
  cin >> fahrenheit;

  converte(fahrenheit, celsius, kelvin);

  cout << fixed << setprecision(2);
  cout << "Celsius: " << celsius << endl;

  cout << fixed << setprecision(2);
  cout << "Kelvin: " << kelvin << endl;

  return 0;
}