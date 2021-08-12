#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct Student {
  char name[100];
  int age = 0;
  char course[3];
};

int main() {
  Student oldestStudent;
  int studentsNumber = 0;
  int softwareOrComputerStudentsNumber = 0;

  while (true) {
    cin.ignore();

    Student newStudent;

    cin.getline(newStudent.name, 100);
    if (strcmp(newStudent.name, "SAIR") == 0) break;

    cin >> newStudent.age;
    cin.ignore();
    cin >> newStudent.course;


    if (newStudent.age > oldestStudent.age) {
      oldestStudent = newStudent;
    }

    if (
      strcmp(newStudent.course, "GEC") == 0 
      || strcmp(newStudent.course, "GES") == 0
    ) {
      softwareOrComputerStudentsNumber++;
    }

    studentsNumber++;
  }

  cout << "Aluno mais velho: " << oldestStudent.name << endl;

  float softwareOrComputerStudentsPorcentage = 
    (softwareOrComputerStudentsNumber * 1.0 / studentsNumber) * 100;

  cout 
    << fixed << setprecision(2)
    << "Porcentagem GEC e GES: " 
    << softwareOrComputerStudentsPorcentage 
    << "%" << endl;

  return 0;
}