#include <iostream>
#include <cstring>

using namespace std;

int main() {
  int id;
  cin >> id;

  cin.ignore();

  char name[50];
  cin.getline(name, 50);

  int upperSum = 0;

  for (int i = 0; i < strlen(name); i++) {
    if (isupper(name[i]) > 0) {
      upperSum++;
    }
  }

  cout << upperSum << endl;

  return 0;
}