#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int number, hours;
  double value, salary;

  cin >> number >> hours >> value;

  salary = hours * value;

  cout << fixed << setprecision(2);
  cout << "NUMBER = " << number << endl;
  cout << "SALARY = U$ " << salary << endl;

  return 0;
}