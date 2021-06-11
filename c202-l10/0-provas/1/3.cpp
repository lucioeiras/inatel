#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x, p;
  cin >> x >> p;

  int sumX = 0, sumP = 0, sumPound = 0, smallestP = p, higherX = x, counter = 0;

  while (x >= 0 && p >= 0) {
    sumX += x;
    sumP += p;

    sumPound += x * p;

    if (p < smallestP) {
      smallestP = p;
    }

    if (x > higherX) {
      higherX = x;
    }

    counter++;

    cin >> x >> p;
  }

  double averageX = (sumX * 1.0 / counter);
  double averageP = (sumP * 1.0 / counter);
  double averagePound = (sumPound * 1.0 / sumP);

  cout << fixed << setprecision(2);
  cout << "Media de X: " << averageX << endl;

  cout << fixed << setprecision(2);
  cout << "Media de P: " << averageP << endl;

  cout << fixed << setprecision(2);
  cout << "Media ponderada: " << averagePound << endl;

  cout << "Maior valor de X: " << higherX << endl;
  cout << "Menor valor de P: " << smallestP << endl;
}