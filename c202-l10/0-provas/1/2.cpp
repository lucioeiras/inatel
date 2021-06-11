#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int coxinhasTotal = 0, pasteisTotal = 0, empadasTotal = 0, bolinhasTotal = 0;
  double total;

  for (int i = 0; i < n; i++) {
    char name[50];
    cin >> name;

    int coxinhas, pasteis, empadas, bolinhas;
    cin >> coxinhas >> pasteis >> empadas >> bolinhas; 

    coxinhasTotal += coxinhas;
    pasteisTotal += pasteis;
    empadasTotal += empadas;
    bolinhasTotal += bolinhas;
    
    total += (coxinhas * 0.5) + (pasteis * 0.75) + (empadas * 0.3) + (bolinhas * 0.5);

    cin.ignore();
  }

  cout << "coxinhas = " << coxinhasTotal << endl;
  cout << "pasteis = " << pasteisTotal << endl;
  cout << "empadas = " << empadasTotal << endl;
  cout << "bolinhas = " << bolinhasTotal << endl;

  cout << fixed << setprecision(2);
  cout << "valor total = R$" << total << endl;
}