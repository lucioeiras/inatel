#include <iostream>

using namespace std;

void swap(char &a, char &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  char strs[3][50];

  for (int i = 0; i < 3; i++) 
    cin >> strs[i];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (strs[i][0] < strs[j][0])
        swap(strs[i], strs[j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    if (i != 2)
      cout << strs[i] << " ";
    else
      cout << strs[i] << endl;
  };

  return 0;
}