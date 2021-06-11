#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  int grades[n];

  for (int i = 0; i < n; i++) {
    int grade;
    cin >> grade;

    sum += grade;
    grades[i] = grade;
  }

  float average = sum * 1.0 / n; 
  int biggerThan3 = 0;

  for (int i = 0; i < n; i++) {
    if (grades[i] > average) {
      biggerThan3 += 1;
    }
  }

  cout << fixed << setprecision(2);
  cout << "Media da turma: " << average << endl;
  
  cout << "Alunos com nota acima da media: " << biggerThan3 << endl;
  cout << "Alunos com nota abaixo da media: " << (n - biggerThan3) << endl;
}