#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int liked = 0;
  int notLiked = 0;

  for (int i = 0; i < n; i++) {
    int opinion;
    cin >> opinion;

    if (opinion == 1) {
      liked += 1;
    }
    else if (opinion == -1) {
      notLiked += 1;
    }
  }

  if (liked > notLiked) {
    cout << "A maioria gostou" << endl;
  }
  else if (liked < notLiked) {
    cout << "A maioria nao gostou" << endl;
  }
  else {
    cout << "Deu empate" << endl;
  }
}