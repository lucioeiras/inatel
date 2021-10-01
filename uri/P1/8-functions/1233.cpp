#include <iostream>

using namespace std;

void troca(int &X, int &Y) {
  int t = X;
  X = Y;
  Y = t;
}

int main() {
  int x, y;
  cin >> x >> y;

  troca(x, y);

  cout << x << " " << y << endl;

  return 0;
}