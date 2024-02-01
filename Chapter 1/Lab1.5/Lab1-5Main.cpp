#include <iostream>

#include "Student.h"
using namespace std;

int main() {
    Student student;
    student.setName("Louie");
    student.setGPA(1.0);
    cout << student.getName() << "/" << student.getGPA() << endl;

    student.setName("Felix");
    student.setGPA(3.7);
    cout << student.getName() << "/" << student.getGPA() << endl;

	return 0;
}