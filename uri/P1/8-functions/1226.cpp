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

int main() {
  int n;
  cin >> n;

  int grades[n];

  for (int i = 0; i < n; i++) {
    cin >> grades[i];
  }

  float average = media(grades, n);

  cout << fixed << setprecision(2);
  cout << "Media da turma = " << average << endl;

  return 0;
}