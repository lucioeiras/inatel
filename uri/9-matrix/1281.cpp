#include <iostream>

using namespace std;

int main() {
  int invertedMatrix[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      int number;
      cin >> number;

      invertedMatrix[j][i] = number;
    }
  }

  cout << "M:" << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (j != 1) 
        cout << invertedMatrix[j][i] << " ";
      else
        cout << invertedMatrix[j][i] << endl;
    }
  }

  cout << "M transposta:" << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (j != 1) 
        cout << invertedMatrix[i][j] << " ";
      else
        cout << invertedMatrix[i][j] << endl;
    }
  }

  int determinant = 
    (invertedMatrix[0][0] * invertedMatrix[1][1]) 
    - (invertedMatrix[0][1] * invertedMatrix[1][0]);

  cout << "Determinante: " << determinant << endl;

  return 0;
}