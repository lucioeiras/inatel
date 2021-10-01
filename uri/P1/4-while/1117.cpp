#include <iostream>

using namespace std;

int main() {
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

  cout << "media = " << average / 2 << endl;
}