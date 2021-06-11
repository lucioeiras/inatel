#include <iostream>

using namespace std;

int main() {
  int evens = 0;

  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;

    if (n % 2 == 0) {
      evens++;
    }
  }

  cout << evens << " valores pares" << endl;
}