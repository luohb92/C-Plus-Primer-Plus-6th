//
// Created by 罗海波 on 5/19/22.
//
#include<iostream>
const int ArSize = 8;
int sum_aar(int aar[], int n);
using namespace std;
int main(){
  int cookises[ArSize] = {1, 2, 4,8, 16, 32, 64, 128};
  int sum = sum_aar(cookises, ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  return 0;
}
int sum_aar(int aar[], int n){
  int total = 0;
  for (int i = 0; i < n; ++i) {
    total = total + aar[i];
  }
  return total;
}
