#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
  char strs[3][50] = {"" , "", ""};

  for (int i = 0; i < 3; i++) {
    char str[50];
    cin.getline(str, 50);

    strcpy(strs[i], str);
  }

  char sorted[3][50] = {"" , "", ""};

  for (int i = 0; i < 3; i++) {
    cout << strs[i-1] << endl;

    // if (strs[i][0] > strs[i - 1][0] && strs[i][0] > strs[i + 1][0]) {
    //   strcpy(sorted[0], strs[i]);
    // }
    // else if (strs[i][0] > strs[i - 1][0] || strs[i][0] > strs[i + 1][0]) {
    //   strcpy(sorted[1], strs[i]);
    // }
    // else {
    //   strcpy(sorted[2], strs[i]);
    // }
  }

  for (int i = 0; i < 3; i++) {
    cout << sorted[i];

    if (i != 2) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}