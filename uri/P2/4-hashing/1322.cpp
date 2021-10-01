#include <iostream>

using namespace std;

int hash_aux(int k, int m) {
  int hash = k % m;

  if (hash < 0) {
    hash += m;
  }

  return hash;    
}

int hash1(int k, int i, int m) {
  return (hash_aux(k, m) + i) % m;
}

int main() {
  int k, m;
  cin >> k >> m;

  for (int i = 0; i < m; i++) {
    cout << hash1(k, i, m);

    if (i < m - 1) {
      cout << " ";
    }
  }

  cout << endl;
  return 0;
}