#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct File {
  char name[50];
  ifstream handle;
};

struct Process {
  int id;
  int executionTime;
  int priority;

  void print() {
    cout << "P" << id;

    for (int i = 0; i < executionTime; i++) {
      cout << "-";
    }
  }
};

void swap(Process *xp, Process *yp) {
  Process temp = *xp;
  *xp = *yp;
  *yp = temp;
}
 
void prioritySort(Process process[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (process[j].priority > process[j + 1].priority) {
        swap(&process[j], &process[j + 1]);
      }
    } 
  }
}

int main() {
  Process processes[50];

  File newFile;
  cin >> newFile.name;

  newFile.handle.open(newFile.name, ifstream::in);

  int length = 0;

  while (!newFile.handle.eof()) {
    newFile.handle 
      >> processes[length].id
      >> processes[length].executionTime
      >> processes[length].priority;

    length++;
  }

  prioritySort(processes, length);

  int processesTimeSum = 0;

  for (int i = 0; i < length; i++) {
    processes[i].print();

    if (i != 0) {
      for (int j = 0; j < i; j++) {
        processesTimeSum += processes[j].executionTime;
      }
    }
  }

  cout << endl;
  
  double processesTimeAverage = processesTimeSum * 1.0 / length;

  cout << fixed << setprecision(1);
  cout << "Tempo medio de espera: " << processesTimeAverage << " ms" << endl;

  newFile.handle.close();

  return 0;
}
