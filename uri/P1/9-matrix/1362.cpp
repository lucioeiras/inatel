#include <iostream>

using namespace std;

int trace_matrix(int matrix[][50]) {
  int trace = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        trace += matrix[i][j];
      }
    }
  }

  return trace;
}

int main() {
  int n;
  cin >> n;

  int matrix[50][50];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  int trace = trace_matrix(matrix);

  cout << "traco = " << trace << endl;

  return 0;
}