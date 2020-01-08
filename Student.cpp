#include "Student.h" // include student header

using namespace std;

Student::Student(char* newTestString) { // constructor
  testString = newTestString;
}

char* Student::getTestString() { // get test string
  return testString;
}
