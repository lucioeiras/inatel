#include <iostream>
#include <iomanip>

using namespace std;

struct Stormtrooper {
  int id;
  double grade;
};

int main() {
  Stormtrooper currentTrooper = { id: 1, grade: 0 };

  int id;
  double evilness, power;

  cin >> id;

  while (id != 0) {
    cin >> evilness >> power;

    double grade = (evilness + power) / 2;

    if (grade > currentTrooper.grade) {
      currentTrooper = { id: id, grade: grade };
    }

    cin >> id;
  }

  cout << "Stormtrooper escolhido: " << currentTrooper.id << endl;

  cout << fixed << setprecision(2);
  cout << "GA = " << currentTrooper.grade << endl;

  return 0;
}