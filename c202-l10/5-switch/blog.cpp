#include <iostream>
#include <string>

using namespace std;

struct Topic {
  string continent;
  char code;
};

const Topic topics[6] = {
  {
    continent: "Africa",
    code: 'a'
  },
  {
    continent: "America",
    code: 'b'
  },
  {
    continent: "Antartida",
    code: 'c'
  },
  {
    continent: "Asia",
    code: 'd'
  },
  {
    continent: "Europa",
    code: 'e'
  },
  {
    continent: "Oceania",
    code: 'f'
  }
};

int main() {
  char topic;
  cin >> topic;

  for (int i = 0; i < 6; i++) {
    if (topic == topics[i].code) {
      cout << topics[i].continent << endl;
      return 0;
    }
  }

  cout << "Opcao Invalida!" << endl;
}