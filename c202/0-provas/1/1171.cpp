#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int peopleWithoutUniversityEducation = 0, youngWomenWithChildrens = 0;

  for (int i = 0; i < n; i++) {
    char sex, scholarity;
    int age, childrens;
    cin >> sex >> age >> scholarity >> childrens;

    if (age > 20 && scholarity != 'S') {
      peopleWithoutUniversityEducation++;
    }

    if (sex == 'F' && age < 18 && childrens > 0) {
      youngWomenWithChildrens++;
    }
  }

  cout 
    << peopleWithoutUniversityEducation 
    << " pessoas com mais de 20 anos sem ensino superior" 
    << endl;

  cout
    << youngWomenWithChildrens
    << " mulheres com menos de 18 anos com ao menos um filho"
    << endl;

  return 0;
}