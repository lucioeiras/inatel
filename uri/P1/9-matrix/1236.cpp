#include <iostream>

using namespace std;

int main() {
  int lines, columns;
  cin >> lines >> columns;

  int matrix1[lines][columns], matrix2[lines][columns];

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix1[i][j];
    }
  }

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix2[i][j];
    }
  }

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      int sum = matrix1[i][j] + matrix2[i][j];

      if (j != (columns - 1)) 
        cout << sum << " ";
      else
        cout << sum << endl;
    }
  }

  return 0;
}