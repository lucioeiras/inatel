#include <iostream>

using namespace std;

int main() {
  int positives = 0;

  for (int i = 0; i < 6; i++) {
    double n;
    cin >> n;

    if (n > 0) {
      positives++;
    }
  }

  cout << positives << " valores positivos" << endl;
}