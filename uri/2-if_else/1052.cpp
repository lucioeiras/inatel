#include <iostream>
#include <string>

using namespace std;

int main() {
  int number;
  cin >> number;

  string months[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December",
  };

  cout << months[number - 1] << endl;

  return 0;
}