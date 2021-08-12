#include <iostream>

using namespace std;

int main() {
  int n, counter = 0, numbers[100];
  cin >> n;

  while (n != 0) {
    numbers[counter] = n;
    counter++;

    cin >> n;
  }

  int numbersGreaterThanLast = 0;

  for (int i = 0; i < counter; i++) {
    if (numbers[i] > numbers[counter - 1]) {
      numbersGreaterThanLast++;
    }
  }

  cout << numbersGreaterThanLast << endl;

  return 0;
}