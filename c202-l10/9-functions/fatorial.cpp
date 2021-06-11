#include <iostream>

using namespace std;

int factorial(int number, int &result) {
  for (int i = 1; i <= number; i++) {
    result *= i;
  }

  return 0;
}

int main() {
  int n, result = 1;
  cin >> n;

  factorial(n, result);
  cout << result << endl;

  return 0;
}