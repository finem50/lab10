#include <iostream>

using namespace std;

int index_of_min(const int a[], int start_index, int used_size);
int index_of_max(const int a[], int start_index, int used_size);
void sort_array(int a[], int used_size);

const int MAX_SIZE = 4;

int main(){

  int minIndex, maxIndex;
  int arr[MAX_SIZE];

  cout << "Enter up to 20 integers..." << endl;
  cout << "Enter 'q' to quit entering integers" << endl;
  for(int i = 0; i < MAX_SIZE; i++){

    cout << "Enter value # " << i + 1 << ": ";
    cin >> arr[i];

  }

  minIndex = index_of_min(arr, 0, MAX_SIZE);
  cout << "\nIndex of the minimum value is: " << minIndex << endl;
  cout << "The minimum value is: " << arr[minIndex] << endl;

  maxIndex = index_of_max(arr, 0, MAX_SIZE);
  cout << "\nIndex of the maximum value is: " << maxIndex << endl;
  cout << "The maximum value is: " << arr[maxIndex] << endl;

  sort_array(arr, MAX_SIZE);

  cout << "\nAfter sorting...\n\n";

  for(int i = 0; i < MAX_SIZE; i++){

    cout << "Value #" << i << ": " << arr[i] << endl;
  }

  return 0;
}


int index_of_min(const int a[], int start_index, int used_size){

  int min = a[start_index], index_of_min = start_index;

  for(int i = start_index + 1; i < used_size; i++){

    if(a[i] < min){

      min = a[i];
      index_of_min = i;
    }
  }

  return index_of_min;
}

int index_of_max(const int a[], int start_index, int used_size){

  int max = a[start_index], index_of_max = start_index;

  for(int i = start_index + 1; i < used_size; i++){

    if(a[i] > max){

      max = a[i];
      index_of_max = i;
    }
  }

  return index_of_max;
}

void sort_array(int a[], int used_size){

  int index_of_next_min, temp;

  for(int i = 0; i < used_size - 1; i++){

    index_of_next_min = index_of_min(a, i, used_size);
    //Swap two elements
    temp = a[i];
    a[i] = a[index_of_next_min];
    a[index_of_next_min] = a[i];
  }
}
