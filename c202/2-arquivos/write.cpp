#include<iostream>
#include<fstream>

using namespace std;

struct File {
  char name[50];
  ifstream handleRead;
  ofstream handleWrite;
};

int main() {
  File file;
  double n, counter = 0;

  cin >> file.name >> n;

  file.handleWrite.open(file.name, ofstream::out);

  while (n != 0) {
    file.handleWrite << n << endl;
    counter++;
    cin >> n;
  }

  file.handleWrite.close();
  file.handleRead.open(file.name, ifstream::in);

  double number;

  for (int i = 0; i < counter; i++) {
    file.handleRead >> number;
    cout << number << endl;
  }

  file.handleRead.close();

  return 0;
}