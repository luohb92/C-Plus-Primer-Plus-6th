//
// Created by 罗海波 on 5/19/22.
//
#include <iostream>
#include <cmath>
struct polar{
  double distance;
  double angle;
};
struct rect{
  double x;
  double y;
};
void rect_to_polar(const rect *xypos , polar *pad);
void show_polar(const polar *dapos);
using namespace std;
int main(){
  rect rplace;
  polar pplace;
  cout << "Enter the x an y values: ";
  while(cin >> rplace.x >> rplace.y) {
    rect_to_polar(&rplace, &pplace);
    show_polar(&pplace);
    cout << "Next two numbers (q to quit): ";

  }
  cout << "Done" << endl;
  return 0;
}
void rect_to_polar(const rect *xypos , polar *pad){
  polar answer;
  pad->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
  pad->angle = atan2(xypos->y, xypos->x);
}
void show_polar(const polar *dapos){
  const double Rad_to_deg = 57.29577951;
  cout << "distance = " << dapos->distance;
  cout << ", angel = " << dapos->angle * Rad_to_deg;
  cout << "degrees" << endl;
}
