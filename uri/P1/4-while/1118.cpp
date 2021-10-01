#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int newCalc = 1;

  while (newCalc == 1) {
    double grade;

    double average = 0;
    int validGrades = 0;

    while (validGrades < 2) {
      cin >> grade;

      if (grade < 0 || grade > 10) {
        cout << "nota invalida" << endl;
      }
      else {
        average += grade;
        validGrades++;
      }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << average / 2 << endl;

    newCalc = 0;

    while (newCalc != 1 && newCalc != 2) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> newCalc;
    }
  }
}