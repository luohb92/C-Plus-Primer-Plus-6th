//
// Created by 罗海波 on 5/19/22.
//
#include<iostream>
void cheers(int);
double cube(double x);
using namespace std;
int main(){
  cheers(5);
  cout <<"Give me a number";
  double side;
  cin >> side;
  double volume = cube(side);
  cout << "A " << side << "-foot cube has a volume of ";
  cout << volume << "cubic feet .\n";
  cheers(cube(2));
  return 0;
}
void cheers(int n) {
  for(int i = 0; i < n; ++i) {
    cout << "Cheers! ";
  }
  cout << endl;
}
double cube(double x) {
  return x * x * x;
}