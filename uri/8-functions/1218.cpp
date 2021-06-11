#include <iostream>
#include <iomanip>

using namespace std;

double ideal(double h, char sexo) {
  double weight = (sexo == 'M') ? (72.7 * h - 58) : (62.1 * h - 44.7);
  return weight;
}

int main() {
  double height;
  char sex;

  cin >> height >> sex;

  double idealWeight = ideal(height, sex);

  cout << fixed << setprecision(2);
  cout << "Peso ideal: " << idealWeight << " kg" << endl;

  return 0;
}