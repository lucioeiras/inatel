#include <iostream>
#include <iomanip>

using namespace std;

struct Product {
  int code;
  int quantity;
  float price;
};

void swap(Product* a, Product* b) { 
  Product t = *a; 
  *a = *b; 
  *b = t; 
}

int partition (Product products[], int low, int high) { 
  int pivot = products[high].code;
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) { 
    if (products[j].code < pivot) { 
      i++;
      swap(&products[i], &products[j]); 
    } 
  }

  swap(&products[i + 1], &products[high]); 
  return (i + 1); 
} 

void quickSort(Product products[], int low, int high) { 
  if (low < high) { 
    int pi = partition(products, low, high); 
    
    quickSort(products, low, pi - 1); 
    quickSort(products, pi + 1, high); 
  } 
}

int main() {
  int n;
  cin >> n;

  Product products[n];

  for (int i = 0; i < n; i++) {
    cin 
      >> products[i].code 
      >> products[i].quantity 
      >> products[i].price;
  }

  quickSort(products, 0, n - 1);

  cout << fixed << setprecision(2);

  for (int i = 0; i < n; i++) {
    cout
      << "Codigo: " << products[i].code << endl
      << "Quantidade em estoque: " << products[i].quantity << endl
      << "Preco unitario: R$ " << products[i].price << endl
      << endl;
  }

  return 0;
}
