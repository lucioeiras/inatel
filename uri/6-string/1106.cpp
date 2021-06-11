#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin.ignore();

    char name[50];
    cin.getline(name, 50);

    double sum = 0;

    for (int j = 0; j < 4; j++) {
      int grade;
      cin >> grade;
      sum += grade * (j + 1);
    }

    cout << fixed << setprecision(2);
    cout << name << ": " << sum * 1.0 / 10 << endl;

  }
}