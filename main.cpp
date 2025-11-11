#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person :: Person(int name,int id){
this -> name = name;
    this-> id = id;
}
void Person::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
}

// ==================== Student Class Implementation ====================
Student::Student(int year,string major) {
        year =  yearLevel;
        this ->major = major;
    }

void Student::display() {
        cout << "Name:" <<name <<endl;
        cout << "Year:" <<yearLevel << endl;
        cout << "Major:" << major<<endl;
    }


// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string department, int experienceYears){ 
    this-> department = department;
    this-> experienceYears = experienceYears;
    
}
void Instructor::display() {
        cout << "Name: Dr." <<name <<endl;
        cout << "Department:" <<department << endl;
        cout << "Experience:" << experienceYears<<endl;
    }

// ==================== Course Class Implementation ====================
Course::Course(string courseCode, string courseName, int maxStudents, Student *students, int currentStudents) {

this-> courseCode = courseCode;
this-> courseName = courseName;
this-> maxStudents = maxStudents;
    this-> students = students;
this-> currentStudents = currentStudents;}

    Course::addStudents(const Student& s) {
    s+=1;
        
    }
Course:: displayCourseInfo(){
cout << "Course:" << courseCode <<"-"<< courseName<<endl;
cout << "MaxStudents:" << maxStudents << endl;
cout << "Currently Enrolled:" << *students <<endl;    

}






// ==================== Main Function ====================
int main() {
    
    return 0;
}
