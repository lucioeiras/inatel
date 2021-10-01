#include <iostream>

using namespace std;

int main() {
  int newGrenal = 1;

  int grenais = 0;
  int interVictories = 0;
  int gremioVictories = 0;
  int ties = 0;

  while (newGrenal == 1) {
    int interGols, gremioGols;
    cin >> interGols >> gremioGols;

    grenais += 1;

    if (interGols > gremioGols) {
      interVictories += 1;
    }
    else if (interGols < gremioGols) {
      gremioVictories += 1;
    }
    else {
      ties += 1;
    }

    newGrenal = 0;

    while (newGrenal != 1 && newGrenal != 2) {
      cout << "Novo grenal (1-sim 2-nao)" << endl;
      cin >> newGrenal;
    }
  }

  cout << grenais << " grenais" << endl;
  cout << "Inter:" << interVictories << endl;
  cout << "Gremio:" << gremioVictories << endl;
  cout << "Empates:" << ties << endl;

  if (interVictories > gremioVictories) {
    cout << "Inter venceu mais" << endl;
  }
  else {
    cout << "Gremio venceu mais" << endl;
  }
}