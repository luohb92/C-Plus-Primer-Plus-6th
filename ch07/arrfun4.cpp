//
// Created by 罗海波 on 5/19/22.
//
#include<iostream>
const int ArSize = 8;
int sum_aar(const int* begin, const int* end);
using namespace std;
int main(){
  int cookises[ArSize] = {1, 2, 4,8, 16, 32, 64, 128};
  int sum = sum_aar(cookises, cookises+ ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  return 0;
}
int sum_aar(const int* begin, const int* end){
  const int* pt;
  int total = 0;
  for (pt = begin; pt != end; ++pt) {
    total = total + *pt;
  }
  return total;
}
