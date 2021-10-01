#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double salary;
  cin >> salary;

  if (salary >= 0 && salary <= 2000) {
    cout << "Isento" << endl;
    return 0;
  } 

  double tax;

  if (salary > 4500) {
    tax += (salary - 4500) * 0.28;
    salary = salary - (salary - 4500);
  }

  if (salary > 3000) {
    tax += (salary - 3000) * 0.18;
    salary = salary - (salary - 3000);
  }

  if (salary > 2000) {
    tax += (salary - 2000) * 0.08;
  }

  cout << fixed << setprecision(2);
  cout << "R$ " << tax << endl;

  return 0;
}