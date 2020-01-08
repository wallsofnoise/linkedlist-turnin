// header guard
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student { // basic student class to prove node works
 public:
  // constructor
  Student(char*);
  // function prototypes
  char* getTestString(); // get a test string used to make sure getStudent() in node class will return something
private:
  // variables
  char* testString;
};
#endif
// header guard end
