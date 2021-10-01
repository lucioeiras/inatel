#include <iostream>

using namespace std;

int pow(int a, int n) {
  if (n != 0) {
    return a * pow(a, n - 1);
  }

  return 1;
}

int main() {
  int a, n;
  cin >> a >> n;

  int res = pow(a, n);

  cout << res << endl;

  return 0;
}