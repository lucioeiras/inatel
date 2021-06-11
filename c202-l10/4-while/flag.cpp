#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int mens = 0;
  int womens = 0;
  double height, shortestHeight, womensHeightSum = 0; 
  cin >> height;

  shortestHeight = height;

  while (height != -1) {
    if (height < shortestHeight) {
      shortestHeight = height;
    }

    int sex;
    cin >> sex;

    if (sex == 1) {
      mens++;
    }
    else if (sex == 2) {
      womensHeightSum += height;
      womens++;
    }

    cin >> height;
  }

  double womensHeightAverage = womensHeightSum / womens;

  cout << mens << " Hom." << endl;

  cout << fixed << setprecision(2);
  cout << "Menor altura: " << shortestHeight << endl;

  cout << fixed << setprecision(2);
  cout << "Média: " << womensHeightAverage << endl;
}