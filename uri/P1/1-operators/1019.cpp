#include <iostream>

using namespace std;

int main() {
  int time;
  cin >> time;

  int hours = time / 3600;
  int minutes = time % 3600 / 60;
  int seconds = time - (hours * 3600) - (minutes * 60);

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}