#include <iostream>

using namespace std;

int main() {
  int lines, columns;
  cin >> lines >> columns;

  int matrix[lines][columns];

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      cout << matrix[i][j];

      if (j != (columns - 1)) {
        cout << " ";
      }
    }

    cout << endl;
  }

  return 0;
}