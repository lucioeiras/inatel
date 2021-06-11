#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int numbers[n];
  int negatives = 0;

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    if (number >= 0) {
      numbers[i] = number;
    }
    else {
      numbers[i] = 0;
      negatives++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << numbers[i];

    if (i != (n - 1)) {
      cout << " ";
    }
  }

  cout << endl << negatives << endl;

  return 0;
}