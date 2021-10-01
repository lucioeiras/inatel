#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[50];
  cin.getline(str, 50);

  char delim[] = " ";
  char *token = strtok(str, delim);

  while (token) {
    cout << token << endl;
    token = strtok(NULL, delim);
  }

  return 0;
}