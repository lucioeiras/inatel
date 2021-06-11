#include <iostream>

using namespace std;

int main() {
  int value, sum = 0;
  cin >> value;

  while (value != -1) {
    sum += value;
    cin >> value;
  }

  cout << sum << endl;
}