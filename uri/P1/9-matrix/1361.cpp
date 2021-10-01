#include <iostream>

using namespace std;

int sum_matrix(int matrix[][4]) {
  int sum = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      sum += matrix[i][j];
    }
  }

  return sum;
}

int main() {
  int matrix[3][4];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> matrix[i][j];
    }
  }

  int elements_sum = sum_matrix(matrix);

  cout << "soma = " << elements_sum << endl;

  return 0;
}