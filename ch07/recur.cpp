//
// Created by 罗海波 on 5/19/22.
//
#include <iostream>
void countdown(int n);
using namespace std;
int main(){
  countdown(4);
  return 0;
}
void countdown(int n){
  cout << "Counting down ...." << n << endl;
  if(n > 0) {
    countdown(n-1);
  }
  cout << n << ": Kaboom!" << endl;
}