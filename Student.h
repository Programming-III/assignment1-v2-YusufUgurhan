#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person {
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(int year, string major);
    ~Student();
    void display();
};


#endif
