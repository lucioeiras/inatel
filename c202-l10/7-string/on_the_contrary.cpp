#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char string[50];
  cin.getline(string, 50);

  int n = strlen(string) - 1;

  for (int i = 0; i < strlen(string) / 2; i++) {
    swap(string[i], string[n]);
    n--;
  }

  cout << string << endl;

  return 0;
}