#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int bigger = 0;

  for (int i = 0; i < n; i++) {
    int age;
    cin >> age;

    while (age < 0) {
      cin >> age;
    }

    if (age > bigger) {
      bigger = age;
    }
  }

  cout << bigger << endl;
}