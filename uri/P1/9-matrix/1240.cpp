#include <iostream>

using namespace std;

int main() {
  int lines, columns;
  cin >> lines >> columns;

  cin.ignore();

  char message[100], decrypted[100];
  cin.getline(message, 100);

  char matrix[lines][columns];

  int letter = 0;

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      matrix[i][j] = message[letter];
      letter++;
    }
  }

  letter = 0;

  for (int i = 0; i < columns; i++) {
    for (int j = 0; j < lines; j++) {
      decrypted[letter] = matrix[j][i];
      letter++;
    }
  }

  cout << decrypted << endl;

  return 0;
}