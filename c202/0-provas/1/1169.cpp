#include <iostream>

using namespace std;

int main() {
  double voltage;
  cin >> voltage;

  if (voltage <= 0) {
    cout << "Fonte desligada" << endl;
  }
  else if (voltage >= 1 && voltage <= 126) {
    cout << "Baixa tensao" << endl;
  }
  else if (voltage == 127) {
    cout << "Tensao correta" << endl;
  }
  else if (voltage >= 128 && voltage <= 135) {
    cout << "Sobretensao" << endl;
  }
  else if (voltage > 135) {
    cout << "Perigo! Desligue a fonte" << endl;
  }

  return 0;
}