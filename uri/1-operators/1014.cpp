#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int distance;
  double gas;

  cin >> distance >> gas;

  double consumption = distance / gas;

  cout << fixed << setprecision(3);
  cout << consumption << " km/l" << endl;

  return 0;
}