#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int x;
  cin >> x;

  double s = (pow(x, 3) - pow(x, 2)) * sqrt(x);

  cout << fixed << setprecision(2);
  cout << s << endl;

  return 0;
}