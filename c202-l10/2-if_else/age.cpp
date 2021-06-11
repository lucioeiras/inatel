#include <iostream>

using namespace std;

int main() {
  char name1[50], name2[50];
  int age1, age2;

  cin.getline(name1, 50);
  cin >> age1;

  cin.ignore();

  cin.getline(name2, 50);
  cin >> age2;

  if (age1 == age2) {
    cout << "Idades iguais" << endl;
  } else if (age1 > age2) {
    cout << name1 << endl;
  } else {
    cout << name2 << endl;
  }

  return 0;
}