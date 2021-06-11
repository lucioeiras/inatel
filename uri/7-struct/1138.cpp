#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
  int id;
  double grades[2];
  double average;
};

int main() {
  Student student;

  cin >> student.id;

  for (int i = 0; i < 2; i++) {
    cin >> student.grades[i];
  }

  student.average = (student.grades[0] * 2 + student.grades[1] * 3) / 5;

  cout << "Matricula do aluno: " << student.id << endl;

  cout << fixed << setprecision(2);
  cout << "Nota da primeira prova: " << student.grades[0] << endl;

  cout << fixed << setprecision(2);
  cout << "Nota da segunda prova: " << student.grades[1] << endl;

  cout << fixed << setprecision(2);
  cout << "Media: " << student.average << endl;

  return 0;
}