#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor {
private:
    string department;
    int experienceYears;
public:
    Instructor();
    Instructor(string department, int experienceYears);
    ~Instructor();
    virtual void display();
};












#endif
