//
// Created by 罗海波 on 7/1/22.
//

#ifndef C_PLUS_PRIMER_PLUS_6TH_CH10_STOCK00_H_
#define C_PLUS_PRIMER_PLUS_6TH_CH10_STOCK00_H_
#include <string>
using namespace std;
class Stock{
 private:
  string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot(){
    total_val = shares * share_val;
  }
 public:
  void acquire(const string & co, long n, double pr);
  void buy(long num, double price);
  void shell(long num, double price);
  void update(double price);
  void show();
};

#endif //C_PLUS_PRIMER_PLUS_6TH_CH10_STOCK00_H_
