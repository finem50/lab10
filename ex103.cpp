#include <iostream>

using namespace std;

class Data{

public:
  void set_distance(int d);
  void set_times(int i, double t);
  void display();
  void statistics();

private:
  double time[5]; //Array of time in second
  int distance; //Distance in meter
  double min, max, average;
};

int main(){

  return 0;
}

void Data::set_distance(int d){

  distance = d;
}

void Data::set_times(int i, double t){

  time[i] = t;
}

void Data::display(){

  cout << "Here is your best 5 times for \n";
  cout << distance << " meter \n";

  for(int i = 0; i < 5; i++){

    cout << time[i] << endl;
  }
}
