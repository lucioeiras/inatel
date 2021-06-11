#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  int day, month, year;
  cin >> day >> month >> year;

  int g = year;
  int f = month + 1;

  if (month <= 2) {
    g = year - 1;
  }

  if (month <= 2) {
    f = month + 13;
  }

  double n = int(365.25 * g) + int(30.6 * f) - 621049 + day;
  int delta = 1;

  if (n < 36523) {
    delta = 2;
  } else if (n >= 73048) {
    delta = 0;
  }

  int weekDay = round(modf((n / 7), &n) * 7) + delta + 1;

  string days[] = {
    "domingo", 
    "segunda-feira", 
    "terca-feira", 
    "quarta-feira",
    "quinta-feira",
    "sexta-feira",
    "sabado",
  };

  cout << days[weekDay - 1] << endl;

  return 0;
}