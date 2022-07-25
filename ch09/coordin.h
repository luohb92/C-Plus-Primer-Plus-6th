//
// Created by 罗海波 on 7/1/22.
//

#ifndef C_PLUS_PRIMER_PLUS_6TH_CH09_COORDIN_H_
#define C_PLUS_PRIMER_PLUS_6TH_CH09_COORDIN_H_

struct polar{
  double distance;
  double angle;
};
struct rect {
  double x;
  double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif //C_PLUS_PRIMER_PLUS_6TH_CH09_COORDIN_H_
