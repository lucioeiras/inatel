#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n, sum = 0, counter = 0;
  cin >> n;

  do {
    sum += n;
    counter++;
    cin >> n;
  }
  while (n != 0);

  double average = sum * 1.0 / counter;

  cout << fixed << setprecision(2);
  cout << "Media = " << average << endl;

  return 0;
}