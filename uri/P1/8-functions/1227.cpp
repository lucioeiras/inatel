#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos) {
  int sum = 0;

  for (int i = 0; i < nAlunos; i++) {
    sum += notas[i];
  }

  return sum * 1.0 / nAlunos;
}

int nAbaixo(int notas[], int nAlunos, float media) {
  int counter = 0;

  for (int i = 0; i < nAlunos; i++) {
    if (notas[i] < media)
      counter++;
  }

  return counter;
}

int nAcima(int notas[], int nAlunos, float media) {
  int counter = 0;

  for (int i = 0; i < nAlunos; i++) {
    if (notas[i] >= media)
      counter++;
  }

  return counter;
}

int main() {
  int n;
  cin >> n;

  int grades[n];

  for (int i = 0; i < n; i++) {
    cin >> grades[i];
  }

  float average = media(grades, n);
  int studentsBellowAverage = nAbaixo(grades, n, average);
  int studentsAboveAverage = nAcima(grades, n, average);

  cout << fixed << setprecision(2);
  cout << "Media da turma = " << average << endl;
  cout << "Alunos com nota abaixo da media: " << studentsBellowAverage << endl;
  cout << "Alunos com nota acima da media: " << studentsAboveAverage << endl;

  return 0;
}