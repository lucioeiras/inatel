#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int numbers1[n];
  int numbers2[n];
  char operations[n];

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    numbers1[i] = number;
  }

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    numbers2[i] = number;
  }

  for (int i = 0; i < n; i++) {
    char operation;
    cin >> operation;

    operations[i] = operation;
  }

  double results[n];

  for (int i = 0; i < n; i++) {
    if (operations[i] == '+') {
      results[i] = numbers1[i] + numbers2[i];
    }
    else if (operations[i] == '-') {
      results[i] = numbers1[i] - numbers2[i];
    }
    else if (operations[i] == '*') {
      results[i] = numbers1[i] * numbers2[i];
    }
    else if (operations[i] == '/') {
      results[i] = numbers1[i] * 1.0 / numbers2[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (operations[i] == '/') {
      cout << fixed << setprecision(2);
    }

    cout << numbers1[i] << " " << operations[i] << " " << numbers2[i] << " = " << results[i] << endl;
  }
}