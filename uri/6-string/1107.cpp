#include <iostream>
#include <cstring>

using namespace std;

int main() {
  int n;
  cin >> n;

  cin.ignore();
  
  for (int i = 0; i < n; i++) {
    char a[50], b[50];
    cin >> a >> b;

    if (strcmp(a, b) == 0) 
      cout << "Empate" << endl;

    if (strcmp(a, "pedra") == 0) {
      if (strcmp(b, "papel") == 0)
        cout << "Jogador B" << endl;

      if (strcmp(b, "tesoura") == 0)
        cout << "Jogador A" << endl;
    }

    if (strcmp(a, "papel") == 0) {
      if (strcmp(b, "pedra") == 0)
        cout << "Jogador A" << endl;

      if (strcmp(b, "tesoura") == 0)
        cout << "Jogador B" << endl;
    } 

    if (strcmp(a, "tesoura") == 0) {
      if (strcmp(b, "pedra") == 0)
        cout << "Jogador B" << endl;

      if (strcmp(b, "papel") == 0)
        cout << "Jogador A" << endl;
    }     
  }

  return 0;
}