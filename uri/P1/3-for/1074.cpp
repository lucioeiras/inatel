#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    if (number == 0) {
      cout << "NULL" << endl;
    } 
    else if (number % 2 == 0) {
      cout << "EVEN ";
    }
    else {
      cout << "ODD ";
    }

    if (number > 0) {
      cout << "POSITIVE" << endl;
    }
    else if (number < 0) {
      cout << "NEGATIVE" << endl;
    }
  }
}