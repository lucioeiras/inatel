#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {  
  int temp = *xp;  
  *xp = *yp;  
  *yp = temp;  
} 

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]); 
      }  
    } 
  } 
}  

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  int input[] = {x, y, z};

  int sorted[] = {x, y, z};
  bubbleSort(sorted, 3);

  for (int i = 0; i < 3; i++) {
    cout << sorted[i] << endl;
  }

  cout << endl;

  for (int i = 0; i < 3; i++) {
    cout << input[i] << endl;
  }

  return 0;
}