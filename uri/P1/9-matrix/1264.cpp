#include <iostream>

using namespace std;

int compare(int image[][], int ocr[][][]) {
  
}

int main() {
  int ocr[9][5][3] = {
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
    {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}, {0, 0, 1}, {0, 0, 1}},
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int bit;
      cin >> bit;

      if (bit == male[i][j] && bit != female[i][j]) {
        cout << "MASCULINO" << endl;
        return 0;
      }

      if (bit == female[i][j] && bit != male[i][j]) {
        cout << "FEMININO" << endl;
        return 0;
      }
    }
  }
}