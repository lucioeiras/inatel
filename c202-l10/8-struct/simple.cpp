#include <iostream>

using namespace std;

struct Person {
  char name[50];
  char birthday[50];
  char sex;
};

int main() {
  Person person;

  cin.getline(person.name, 50);
  cin.getline(person.birthday, 50);

  cin >> person.sex;

  cout << person.name << endl;
  cout << person.birthday << endl;
  cout << person.sex << endl;

  return 0;
}