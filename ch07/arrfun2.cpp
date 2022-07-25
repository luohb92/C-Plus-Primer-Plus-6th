//
// Created by 罗海波 on 5/19/22.
//
#include<iostream>
const int ArSize = 8;
int sum_aar(int aar[], int n);
using namespace std;
int main(){
  int cookises[ArSize] = {1, 2, 4,8, 16, 32, 64, 128};
  cout << cookises << " = aaray address, ";
  cout << sizeof(cookises) << " = sizeof cookies " << endl;
  int sum = sum_aar(cookises, ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  sum = sum_aar(cookises, 3);
  cout << "First three eaters ate : " << sum << endl;
  sum = sum_aar(cookises + 4, 4);
  cout << "Last four eaters ate: " << sum << endl;
  return 0;
}
int sum_aar(int aar[], int n){
  int total = 0;
  cout << aar << " = aar, ";
  cout << sizeof(aar) << " = size of aar" << endl;
  for (int i = 0; i < n; ++i) {
    total = total + aar[i];
  }
  return total;
}
