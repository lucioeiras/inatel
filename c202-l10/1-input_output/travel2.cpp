#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x, y, c;
  float p;
  cin >> x >> y >> c >> p;

  float total = (x * y) - (c * p);
  
  cout << fixed << setprecision(2);
  cout << "R$ " << total << endl;

  return 0;
}