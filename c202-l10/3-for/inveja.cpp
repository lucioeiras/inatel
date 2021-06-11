#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int N, x;
  int y, resultado = 0;
  int z = 1;

  cin >> N;

  if (N % 2 ==0) {
    for (x = 1; 1 < N; N--){
      x *= N;
    }

    cout << x;
  }
  else {
    for (x = 0; x < N - 2; x++){
      resultado = y+z;
      y = z;
      z = resultado;
    }

    cout << resultado << endl;			
  }
}