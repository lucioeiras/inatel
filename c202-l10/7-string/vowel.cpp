#include <iostream>
#include <cstring>

using namespace std;

bool isvowel(char character) { 
  return 
       (character == 'a') 
    || (character == 'e') 
    || (character == 'i') 
    || (character == 'o') 
    || (character == 'u');
}

int main() {
  char string[50];
  cin.getline(string, 50);

  int vowels = 0;

  for (int i = 0; i < strlen(string); i++) {
    if (isvowel(string[i])) {
      string[i] = toupper(string[i]);
      vowels++;
    }
  }

  cout << string << endl;
  cout << vowels << endl;

  return 0;
}