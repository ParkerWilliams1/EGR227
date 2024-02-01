#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
       void setName(string n);
   	 // FIXME: Declare 3 more functions *
   	 string getName();
   	 void setGPA(double g);
   	 double getGPA();
   	 
    private:
        // FIXME: Add 2 private data members *
        string name;
        double gpa;
};

#endif