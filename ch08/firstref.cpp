//
// Created by 罗海波 on 5/19/22.
//
#include <iostream>
using namespace std;
int main(){
  int rats = 101;
  int &rodents = rats;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  rodents++;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  cout << "rats address = " << &rats;
  cout << ", rodents address = " << &rodents << endl;
  return 0;
}