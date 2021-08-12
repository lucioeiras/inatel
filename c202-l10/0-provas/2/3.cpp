#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int highest = x > y ? x : y;
  int smallest = x < y ? x : y;

  int sum = 0;

  for (int i = smallest + 1; i < highest; i++) {
    sum += i;
  }

  cout << sum << endl;

  return 0;
}