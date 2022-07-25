//
// Created by 罗海波 on 5/20/22.
//
#include <iostream>
void swapr(int & a, int & b);
void swap(int * p, int * q);
void swapv(int a, int b);
using namespace std;
int main(){
  int wallet1 = 300;
  int wallet2 = 350;
  cout << "wallet1 = $" << wallet1;
  cout << " wallet2 = $" << wallet2 << endl;
  cout << "Using references to swap contents: "<< endl;
  swapr(wallet1, wallet2);
  cout << "wallet1 = $" << wallet1;
  cout << " wallet2 = $" << wallet2 << endl;
  cout << "Using pointers to swap contents again: "<< endl;
  swap(&wallet1, &wallet2);
  cout << "wallet1 = $" << wallet1;
  cout << " wallet2 = $" << wallet2 << endl;
  cout << "Trying to use passing by value: " << endl;
  swapv(wallet1, wallet2);
  cout << "wallet1 = $" << wallet1;
  cout << " wallet2 = $" << wallet2 << endl;
  return 0;
}
void swapr(int & a, int & b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}
void swap(int * p, int * q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
void swapv(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}