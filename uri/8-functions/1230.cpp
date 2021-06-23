#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media(int x, int y, float &m) {
  m = sqrt(x * y);
}

int main() {
  int x, y;
  cin >> x >> y;

  float average;

  media(x, y, average);

  cout << fixed << setprecision(2);
  cout << "Media: " << average << endl;

  return 0;
}