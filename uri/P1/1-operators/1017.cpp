#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int hours, speed;
  cin >> hours >> speed;

  double gas = hours * speed / 12.0;

  cout << fixed << setprecision(3);
  cout << gas << endl;

  return 0;
}