#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int matrix[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int number;
      cin >> number;

      matrix[i][j] = number;
    }
  }

  int column;
  cin >> column;

  for (int i = 0; i < n; i++) {
    cout << matrix[i][column] << endl;
  }

  return 0;
}