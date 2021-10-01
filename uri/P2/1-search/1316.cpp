#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x) {
  bool achou = false;
  int baixo = 0, meio, alto = tamanho - 1;

  while ((baixo <= alto) && (achou == false)) {
    meio = (baixo + alto) / 2;

    if (x < vetor[meio]) {
      alto = meio - 1;
    } else {
      if (x > vetor[meio]) {
        baixo = meio + 1;
      } else {
        achou = true;
      }
    }
  }
  
  if (!achou) {
    return -1;
  }
    
  return meio;
}

int main() {
  int allowedIds[20];
  int i = -1;

  do {
    i++;
    cin >> allowedIds[i];
  } while (allowedIds[i] != -1);

  int newId;
  cin >> newId;

  if (binaria(allowedIds, i, newId) == -1) {
    cout << "Nao possui acesso" << endl;
    return 0;
  }

  cout << "Possui acesso" << endl;
  
  return 0;
}