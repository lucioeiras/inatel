#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  int age;
  string name;
  cin >> age >> name;

  double index = age * 0.023809523 - (age - 3);

  cout << fixed << setprecision(4);
  cout << "Ind = " << index << endl;

  return 0;
}