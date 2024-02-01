#include "Student.h"
#include <iostream>
#include <string>

void Student::setName(string n) {
    name = n;
}

// FIXME: Add 3 member functions

string Student::getName() {
   return name;   
}

void Student::setGPA(double g) {
   gpa = g;
}

double Student::getGPA() {
   return gpa;
}