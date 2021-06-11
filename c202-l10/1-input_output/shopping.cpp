#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  string name;
  int amount;

  cin >> name >> amount;

  float total = amount * 34.9 / 12;
  
  cout << fixed << setprecision(2);
  cout << name << endl;
  cout << "R$: " << total << endl;

  return 0;
}