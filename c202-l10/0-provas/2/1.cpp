#include <iostream>

using namespace std;

struct Pacient {
  char name[100];
  int age;
  char comorbidity[100];
  int id;
  char vacinationDate[100];
};

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    Pacient newPacient;

    cin.ignore();

    cin.getline(newPacient.name, 100);
    cin >> newPacient.age;

    cin.ignore();

    cin >> newPacient.comorbidity >> newPacient.id;

    cin.ignore();

    cin >> newPacient.vacinationDate;

    cout 
      << newPacient.name << endl 
      << newPacient.age << endl
      << newPacient.vacinationDate << endl;
  }

  return 0;
}