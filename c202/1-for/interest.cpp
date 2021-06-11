#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double capital, rateInPercent;
  int time;

  cin >> capital >> rateInPercent >> time;

  double rate = rateInPercent / 100;
  double amount = capital * pow((1 + rate), time);
  double profit = amount - capital;
  
  cout << fixed << setprecision(2);
  cout << "LUCRO = " << profit << endl;

  return 0;
}