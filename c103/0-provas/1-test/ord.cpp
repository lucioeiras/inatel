#include <iostream>

using namespace std;

void swap(int* a, int* b) { 
  int t = *a; 
  *a = *b; 
  *b = t; 
}

int partition (int arr[], int low, int high) { 
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) { 
    if (arr[j] < pivot) { 
      i++;
      swap(&arr[i], &arr[j]); 
    } 
  }

  swap(&arr[i + 1], &arr[high]); 
  return (i + 1); 
} 

void quickSort(int arr[], int low, int high) { 
  if (low < high) { 
    int pi = partition(arr, low, high); 
    
    quickSort(arr, low, pi - 1); 
    quickSort(arr, pi + 1, high); 
  } 
}

int main() {
  int i = -1, arr[20];

  do {
    i++;
    cin >> arr[i];
  } while (arr[i] != -1);

  quickSort(arr, 0, i - 1);

  for (int j = 0; j <= i - 1; j++) {
    cout << arr[j] << " ";
  }

  cout << endl;

  return 0;
}