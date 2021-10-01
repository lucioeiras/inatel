#include <iostream>

using namespace std;

struct Data {
  int k;
  int status;
};

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

int hash_insert(Data t[], int m, int k) {
  int j, i = 0;

  do {
    j = hash1(k, i, m);

    if (t[j].status != 1) {
      t[j].k = k;
      t[j].status = 1;

      return j;
    } else {
      i++;
    }
  } while (i != m);

  return -1;
}

int hash_search(Data t[], int m, int k) {
  int j, i = 0;

  do {
    j = hash1(k, i, m);

    if (t[j].k == k) {
      return j;
    }

    i++;
  } while (t[j].status != 0 && i < m);

  return -1;
}

int hash_remove(Data t[], int m, int k) {
  int j = hash_search(t, m, k);

  if (j != -1) {
    t[j].k = -1;
    t[j].status = 2;

    return 0;
  }

  return -1;
}

int main() {
  int m;
  cin >> m;

  Data table[m];

  for (int i = 0; i < m; i++) {
    table[i].k = -1;
    table[i].status = 0;
  }

  int k;
  cin >> k;

  do {
    hash_insert(table, m, k);
    cin >> k;
  } while (k != 0);

  int toRemoveKey;
  cin >> toRemoveKey;

  hash_remove(table, m, toRemoveKey);

  for (int i = 0; i < m; i++) {
    cout << table[i].k;

    if (i < m - 1) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}