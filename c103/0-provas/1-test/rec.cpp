#include <iostream>

using namespace std;

int combination(int n, int k) {
  if (k == 1) return n;
  if (k == n) return 1;
  
  return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << combination(n, k) << endl;

  return 0;
}