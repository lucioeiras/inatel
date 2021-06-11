#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int bigger = 0;
  int smaller = 0;

  for (int i = 0; i < n; i++) {
    int friends;
    cin >> friends;

    if (friends > bigger) {
      bigger = friends;
    }

    if (friends < smaller || smaller == 0) {
      smaller = friends;
    }
  }

  cout << "Menor numero de contatos: " << smaller << endl;
  cout << "Maior numero de contatos: " << bigger << endl;
}