#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int lines, columns, dimension;
  cin >> lines >> columns >> dimension;

  int oneCounter = 0;

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      int bit;
      cin >> bit;

      if (bit == 1)
        oneCounter++; 
    }
  }

  int area = oneCounter * pow(dimension, 2);

  cout << "AREA = " << area << " mm^2" << endl;

  return 0;
}