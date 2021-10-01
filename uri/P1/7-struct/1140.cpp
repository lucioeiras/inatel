#include <iostream>
#include <iomanip>

using namespace std;

struct Padawan {
  char name[50];
  int grade;
};

int main() {
  int n;
  cin >> n;

  Padawan padawans[n];

  for (int i = 0; i < n; i++) {
    cin.ignore();

    cin.getline(padawans[i].name, 50);
    cin >> padawans[i].grade;
  }

  Padawan greatestPadawan = padawans[0];
  int gradesSum = 0;

  for (int i = 0; i < n; i++) {
    if (padawans[i].grade > greatestPadawan.grade) {
      greatestPadawan = padawans[i];
    }

    gradesSum += padawans[i].grade;
  }

  double gradesAverage = gradesSum * 1.0 / n;

  cout << "Padawan com mais pontos: " << greatestPadawan.name << endl;
  cout << "Pontos: " << greatestPadawan.grade << endl;

  cout << fixed << setprecision(2);
  cout << "Media da turma: " << gradesAverage << " pontos" << endl;

  return 0;
}