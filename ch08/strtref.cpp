//
// Created by 罗海波 on 5/20/22.
//
#include <iostream>
#include <string>
using namespace std;
struct free_throws {
  string name;
  int made;
  int attempts;
  float percent;
};
void dispaly(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);
int main(){
  free_throws one = {"Ifelsa Branch", 13, 14}
  return 0;
}
void dispaly(const free_throws & ft){
  cout << "Name: " << ft.name << endl;
  cout << " Made: " << ft.made << '\t';
  cout << "Attempts: " << ft.attempts << '\t';
  cout << "Percent: " << ft.percent << endl;
}
