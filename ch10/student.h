//
// Created by 罗海波 on 7/5/22.
//

#ifndef C_PLUS_PRIMER_PLUS_6TH_CH10_STUDENT_H_
#define C_PLUS_PRIMER_PLUS_6TH_CH10_STUDENT_H_
class Student{
 public:
  float Grade(){
    return gpa;
  }
  int Hours(){
    return semesHours;
  }
  float addCourse(int hours, float grade) {
    gpa = semesHours * gpa + grade * hours;
    semesHours += hours;
    gpa /= semesHours;
  }
 protected:
  int semesHours;
  float gpa;
};
#endif //C_PLUS_PRIMER_PLUS_6TH_CH10_STUDENT_H_
