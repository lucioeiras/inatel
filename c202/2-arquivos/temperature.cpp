#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct File {
  char name[50];
  ifstream handle;
};

int main() {
  File file;
  cin >> file.name;

  file.handle.open(file.name, ifstream::in);

  double temperatures[50];
  int lenght = 0;
  
  while (!file.handle.eof()) {
    file.handle >> temperatures[lenght];
    lenght++;
  }

  double sum = 0;

  for (int i = 0; i < lenght; i++) {
    sum += temperatures[i];
  }

  double average = sum / lenght;

  cout << fixed << setprecision(1);
  cout << "Temperatura media: " << average << " graus" << endl;

  file.handle.close();

  return 0;
}