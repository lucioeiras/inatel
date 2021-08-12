#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct ponto {
  float x;
  float y;
};

void retpolar(ponto r, float &mag, float &fase) {
  mag = sqrt(pow(r.x, 2) + pow(r.y, 2));
  fase = atan(r.x / r.y);
}

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(4);

  for (int i = 0; i < n; i++) {
    ponto newPoint;
    cin >> newPoint.x >> newPoint.y;

    float mag, fase;

    retpolar(newPoint, mag, fase);

    cout << "magnitude: " << mag << endl;
    cout << "fase: " << fase << endl;
  }

  return 0;
}