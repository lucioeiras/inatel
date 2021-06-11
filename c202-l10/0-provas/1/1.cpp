#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double dribble, pass, kick;

  do {
    cin >> dribble;
  }
  while (dribble < 0 || dribble > 10);

  do {
    cin >> pass;
  }
  while (pass < 0 || pass > 10);

  do {
    cin >> kick;
  }
  while (kick < 0 || kick > 10);

  double strenght = (pow(dribble, 2) / 3) + (sqrt(pass * 110)) + (pow(kick, 3) / 19);

  cout << fixed << setprecision(2);
  cout << "forca = " << strenght << endl;

  if (strenght < 70) {
    cout << "normal" << endl;
  }
  else if (strenght >= 70 && strenght <= 80) {
    cout << "bom" << endl;
  }
  else if (strenght > 80 && strenght < 90) {
    cout << "otimo" << endl;
  }
  else if (strenght >= 90) {
    cout << "lenda" << endl;
  }
}