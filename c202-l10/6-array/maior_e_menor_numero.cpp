#include <iostream>

using namespace std;

struct Number {
  int value;
  int index;
};

int main() {
  int n;
  cin >> n;

  int numbers[n];

  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  Number higher = { value: numbers[0], index: 0 }, smaller = { value: numbers[0], index: 0 };

  for (int i = 0; i < n; i++) {
    if (numbers[i] < smaller.value) {
      smaller.index = i;
      smaller.value = numbers[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] > higher.value) {
      higher.index = i;
      higher.value = numbers[i];
    }
  }

  cout << "Pos Menor: " << smaller.index << endl;
  cout << "Valor Menor: " << smaller.value << endl;

  cout << "Pos Maior: " << higher.index << endl;
  cout << "Valor Maior: " << higher.value << endl;

  return 0;
}