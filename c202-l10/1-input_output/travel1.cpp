#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int hours, speed;
  cin >> hours >> speed;

  float total = hours * speed * 1.0 / 12;
  
  cout << fixed << setprecision(3);
  cout << total << " litro(s)." << endl;

  return 0;
}