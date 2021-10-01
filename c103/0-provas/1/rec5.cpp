#include <iostream>

using namespace std;

int mod(int x, int y) {
  if (x == y) {
    return 0;
  }

  if (x < y) {
    return x;
  }

  return mod(x - y, y);
}

int main() {
  int x, y;
  cin >> x >> y;

  do {
    cout << mod(x, y) << endl;
    cin >> x >> y;
  } while (x != -1 && y != -1);

  return 0;
}