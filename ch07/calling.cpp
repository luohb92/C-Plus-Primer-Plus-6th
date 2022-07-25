//
// Created by 罗海波 on 5/19/22.
//
#include<iostream>
using namespace std;
void simple();
int main(){
  cout << "main() will call the simple() function: \n";
  simple();
  return 0;
}
void simple(){
  cout << "I'm but a simple function.\n";
}