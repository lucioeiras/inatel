#include <iostream>
#include <string>

using namespace std;

struct Jedi {
  int base;
  string name;
};

int main() {
  int n;
  cin >> n;

  Jedi jedis[n];

  for (int i = 0; i < n; i++) {
    int base;
    char name[50];

    cin.ignore();

    cin.getline(name, 50);
    cin >> base;

    jedis[i] = { base: base, name: name };
  }

  cin.ignore();

  char searchedJedi[50];
  cin.getline(searchedJedi, 50);

  bool founded = false;

  for (int i = 0; i < n; i++) {
    if (jedis[i].name == searchedJedi) {
      cout << "Este cavaleiro esta na base " << jedis[i].base << endl;
      founded = true;
    }
  }

  if (!founded) {
    cout << "Este cavaleiro nao esta cadastrado" << endl;
  }

  return 0;
}