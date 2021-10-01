#include <iostream>

using namespace std;

int resolve(int a, char control, int b) {
  if (a == b) {
    return a * b;
  }

  if (control > 64 && control < 91) {
    return b - a;
  }
  
  return a + b;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    char code[50];
    cin >> code;

    int result = resolve(code[0] - '0', code[1], code[2] - '0');

    cout << result << endl;
  }

  return 0;
}