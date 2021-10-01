#include <iostream>
#include <iomanip>

using namespace std;

int pow(int a, int n) {
  if (n != 0) {
    return a * pow(a, n - 1);
  }

  return 1;
}

double sqrt(int x, int xi, int e) {
  if ((pow(xi, 2) - x) <= e) {
    return xi;
  }

  return sqrt(x, (pow(xi, 2) + x) / (2 * xi), e);
}

int main() {
  int x, xi, e;
  cin >> x >> xi >> e;

  double res = sqrt(x, xi, e);

  cout << fixed << setprecision(2) << res << endl;

  return 0;
} 