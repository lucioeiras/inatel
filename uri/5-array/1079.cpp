#include <iostream>

using namespace std;

int main() {
  int elements[100];

  int element;
  cin >> element;

  int counter = 1;

  while (element != 0) {
    elements[counter - 1] = element;
    cin >> element;
    counter++;
  }

  int x;
  cin >> x;

  for (int i = 0; i < counter; i++) {
    if (elements[i] == x) {
      cout << "Elemento " << x << " encontrado na posicao " << i << endl;
      return 0;
    }
  }

  cout << "Elemento " << x << " nao foi encontrado" << endl;
}