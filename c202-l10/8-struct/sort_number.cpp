#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    if (number % 2 == 0) {
      sum += number;
    }
  }

  cout << sum << endl;

  return 0;
}