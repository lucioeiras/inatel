#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x;
  cin >> x;

  double s = 0;
  int increase = 1;
  double parcelas;

  while (s <= 10000) {
    double sum = (x + (increase - 1)) * 1.0 / increase;

    s += sum;
    parcelas++;

    increase++;
  }

  cout << fixed << setprecision(2);
  cout << "S = " << s << endl;

  cout << fixed << setprecision(2);
  cout << parcelas << " Repetições" << endl;
}