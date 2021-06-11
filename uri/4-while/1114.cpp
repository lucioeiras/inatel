#include <iostream>

using namespace std;

int main() {
  int password = 0;
  cin >> password;

  while (password != 2002) {
    cout << "Senha Invalida" << endl;
    cin >> password;
  }

  cout << "Acesso Permitido" << endl;
}