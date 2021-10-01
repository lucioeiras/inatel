#include <iostream>
#include <string>

using namespace std;

struct City {
  int ddd;
  string name;
};

City createCity(int ddd, string name) {
  City city;
  city.ddd = ddd;
  city.name = name;

  return city;
}

int main() {
  int ddd;
  cin >> ddd;

  City cities[] = {
    createCity(61, "Brasilia"),
    createCity(71, "Salvador"),
    createCity(11, "Sao Paulo"),
    createCity(21, "Rio de Janeiro"),
    createCity(32, "Juiz de Fora"),
    createCity(19, "Campinas"),
    createCity(27, "Vitoria"),
    createCity(31, "Belo Horizonte"),
  };

  string city = "DDD nao cadastrado";

  for (int i = 0; i < 8; i++) {
    if (cities[i].ddd == ddd) {
      city = cities[i].name;
    }
  }

  cout << city << endl;

  return 0;
}