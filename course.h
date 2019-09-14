// Replace MY_CLASS and My_class with the actual class name
  
// Ensure this header file is only included once.
// Use all caps for these
#ifndef MY_CLASS_H
#define MY_CLASS_H

// Add any includes here (such as #include <iostream>)
#include <iostream>
using namespace std;

class Course
{
 public:
  // public member functions go here
  void print();
  Course (string, int, int);

 private:
  // member variables go here
  // member function used only by other member functions go here
  string dept;
  int time;
  int number;

}; // don't forget this ;

#endif
