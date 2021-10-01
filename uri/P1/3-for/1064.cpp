#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int positives = 0;
  double average = 0;

  for (int i = 0; i < 6; i++) {
    double n;
    cin >> n;

    if (n > 0) {
      positives++;
      average += n;
    }
  }

  cout << positives << " valores positivos" << endl;

  cout << fixed << setprecision(1);
  cout << average / positives << endl;
}