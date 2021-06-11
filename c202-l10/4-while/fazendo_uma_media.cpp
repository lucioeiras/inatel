#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int value, sum, total = 0;
  cin >> value;

  while (value >= 0) {
    sum += value;
    cin >> value;

    total++;
  }

  double average = sum * 1.0 / total;

  cout << fixed << setprecision(2);
  cout << average << endl;
}