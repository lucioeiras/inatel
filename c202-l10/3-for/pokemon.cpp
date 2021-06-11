#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int pokeballsTotal = 0;
  int powerTotal = 0;

  for (int i = 0; i < n; i++) {
    char name[50];
    int pokeballs, power;

    cin.ignore();
    cin.getline(name, 50);

    cin >> pokeballs >> power;

    pokeballsTotal += pokeballs;
    powerTotal += power;
  }

  cout << "Total de Pokebolas = " << pokeballsTotal << endl;

  if (n > 0) {
    double powerAverage = powerTotal * 1.0 / n;

    cout << fixed << setprecision(2);
    cout << "Media de forca = " << powerAverage << endl;
  }
  else {
    cout << "Media de forca = 0" << endl;
  }
}