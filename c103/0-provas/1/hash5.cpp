#include <iostream>
#include <cmath>

using namespace std;

struct Data {
  int key;
  int status;
};

struct Hash {
  void create_table(Data t[], int m) {
    for (int i = 0; i < m; i++) {
      t[i].key = -1;
      t[i].status = 0;
    }
  }

  int aux(int k, int m) {
    int h = k % m;

    if (h < 0) {
      h += m;
    }

    return h;    
  }

  int make(int k, int i, int m) {
    return (aux(k, m) + i) % m;
  }

  int insert(Data t[], int m, int k) {
    int j, i = 0;

    do {
      j = make(k, i, m);

      if (t[j].status != 1) {
        t[j].key = k;
        t[j].status = 1;

        return j;
      } else {
        i++;
      }
    } while (i != m);

    return -1;
  }

  int search(Data t[], int m, int k) {
    int j, i = 0;

    do {
      j = make(k, i, m);

      if (t[j].key == k) {
        return j;
      }

      i++;
    } while (t[j].status != 0 && i < m);

    return -1;
  }

  int remove(Data t[], int m, int k) {
    int j = search(t, m, k);

    while (j != -1) {
      t[j].key = -1;
      t[j].status = 2;

      j = search(t, m, k);
    }

    return -1;
  }
};

int main() {
  Hash hash_module;

  int m;
  cin >> m;

  Data table[m];
  hash_module.create_table(table, m);

  int key;
  cin >> key;

  while (key != 0) {
    hash_module.insert(table, m, key);
    cin >> key;
  }

  int toRemoveKey;
  cin >> toRemoveKey;

  hash_module.remove(table, m, toRemoveKey);

  for (int i = 0; i < m; i++) {
    cout << table[i].key;

    if (i < m - 1) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}