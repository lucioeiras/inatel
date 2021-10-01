#include <iostream>

using namespace std;

void swap(int *a, int *b) { 
  int t = *a;
  *a = *b; 
  *b = t; 
} 
  
void bubbleSort(int arr[], int n) { 
  int i, j; 

  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
} 

int main() {
  int arr[100];
  int size = -1;

  do {
    size++;
    cin >> arr[size];
  } while (arr[size] != 0);

  bubbleSort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}