#include <iostream>

using namespace std;

struct dados { 
  char nome[100]; 
  int n1;
  int n2;
  int n3;
  int n4;
};

int strongest(dados atletas[], int nAtletas) {
  int winnerIndex, winnerSum = 0;

  for (int i = 0; i < nAtletas; i++) {
    int sum = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;

    if (sum > winnerSum) {
      winnerIndex = i;
      winnerSum = sum;
    }
  }

  return winnerIndex;
}

int main() {
  int n;
  cin >> n;

  dados competitors[n];

  for (int i = 0; i < n; i++) {
    cin.ignore();
    cin.getline(competitors[i].nome, 100);

    cin 
      >> competitors[i].n1 
      >> competitors[i].n2 
      >> competitors[i].n3 
      >> competitors[i].n4;
  }

  int winnerIndex = strongest(competitors, n);

  cout << "Vencedor: " << competitors[winnerIndex].nome << endl;

  return 0;
}