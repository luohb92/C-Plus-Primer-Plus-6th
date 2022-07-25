//
// Created by 罗海波 on 7/5/22.
//

#ifndef C_PLUS_PRIMER_PLUS_6TH_CH10_TDATE_H_
#define C_PLUS_PRIMER_PLUS_6TH_CH10_TDATE_H_
class Tdate{
 public:
  void set(int m, int d, int y);
  int isLeapYear();
  void print();
 private:
  int month;
  int day;
  int year;
};

#endif //C_PLUS_PRIMER_PLUS_6TH_CH10_TDATE_H_
