//
// Created by 罗海波 on 7/5/22.
//
#include <iostream>
#include <cstring>
using namespace std;
class Student{
 public:
  Student(char* pName){
    strncpy(name,pName, sizeof(name));
    name[sizeof(name) -1] = '\0';
  }
  Student(){

  }
 private:
  char name[20];
};

int main(){
  Student noName;
  Student ss("Jenny");
  return 0;
}