#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int item, amount;
  cin >> item >> amount;

  double products [5] = {4, 4.5, 5, 2, 1.5};
  double total = products[item - 1] * amount;

  cout << fixed << setprecision(2);
  cout << "Total: R$ " << total << endl;

  return 0;
}