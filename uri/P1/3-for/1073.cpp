#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      long square = pow(i, 2);
      cout << i << "^2 = " << square << endl;
    }
  }
}