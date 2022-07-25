//
// Created by 罗海波 on 7/1/22.
//
#include <iostream>
#include "stock00.h"
int main(){
  Stock fluffy_the_cat;
  fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(15, 18.125);
  fluffy_the_cat.show();
  fluffy_the_cat.shell(400, 20.00);
  return 0;
}