#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin.ignore();

    char name[50];
    cin.getline(name, 50);

    int age;
    cin >> age;

    if (age >= 18) {
      cout << name << " " << age << endl;
    }
  }

  return 0;
}