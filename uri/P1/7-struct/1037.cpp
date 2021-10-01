#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
  int id;
  double grades[2];
};

int main() {
  Student student;

  cin >> student.id;

  for (int i = 0; i < 2; i++) {
    cin >> student.grades[i];
  }

  cout << "Matricula do aluno: " << student.id << endl;

  cout << fixed << setprecision(2);
  cout << "Nota da primeira prova: " << student.grades[0] << endl;

  cout << fixed << setprecision(2);
  cout << "Nota da segunda prova: " << student.grades[1] << endl;

  return 0;
}