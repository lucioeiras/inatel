#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char string1[50], string2[50];
  cin >> string1 >> string2;

  if (strcmp(string1, string2) == 0) {
    char stringWithoutNumbers[50];
    int counter = 0;

    for (int i = 0; i < 50; i++) {
      if (!isdigit(string1[i])) {
        stringWithoutNumbers[counter] = string1[i];
        counter++;
      }
    }

    cout << stringWithoutNumbers << endl;
  }
  else {
    cout << "Nao sao iguais!" << endl;
  }

  return 0;
}