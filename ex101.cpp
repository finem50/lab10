//A program that uses a flexible size array of integers

#include <iostream>

using namespace std;

const int SIZE = 8; //Set the maximum size for the array

int main(void){

  int numlist[SIZE], temp;

  //Read SIZE integers from the keyboard
  for(int i = 0; i < SIZE; i++){

    cout << "Enter value #" << i + 1 << ": ";
    cin >> numlist[i];
  }

  cout << "\n";

  for(int i = 0; i < SIZE; i++){

    cout << "Value #" << i << ": ";
    cout << numlist[i] << endl;
  }

  cout << "\nReversing array now...\n\n";

  for(int i = 0; i < (SIZE / 2); i++){

    temp = numlist[i];
    numlist[i] = numlist[(SIZE - 1) - i];
    numlist[(SIZE - 1) - i] = temp;
  }


  for(int i = 0; i < SIZE; i++){

    cout << "Value #" << i << ": ";
    cout << numlist[i] << endl;
  }

  return 0;
}
