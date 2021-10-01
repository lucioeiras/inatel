#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
  int i, j;
  int key;

  for (j = 1; j < size; j++) {
    key = arr[j];
    i = j - 1;

    while ((i >= 0) && (arr[i] > key)) {
      arr[i + 1] = arr[i];
      i = i - 1;
    }
    
    arr[i + 1] = key;
  }
}

int main() {
  int arr[100];
  int size = -1;

  do {
    size++;
    cin >> arr[size];
  } while (arr[size] != 0);

  insertionSort(arr, size);

  for (int i = size - 1; i > -1; i--) {
    cout << arr[i];

    if (i != 0) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}