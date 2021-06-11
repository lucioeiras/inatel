#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int moreThan10m = 0;
  int lessThan10m = 0;

  for (int i = 0; i < n; i++) {
    int video;
    cin >> video;

    if (video >= 10000000) {
      moreThan10m += 1;
    }
    else {
      lessThan10m += 1;
    }
  }

  cout << moreThan10m << " video(s) com mais de 10M views" << endl;
  cout << lessThan10m << " video(s) com menos de 10M views" << endl;
}