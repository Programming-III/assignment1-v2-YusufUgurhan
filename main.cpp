#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person :: Person
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
void Instructor::display() {
        cout << "Name: Dr." <<name <<endl;
        cout << "Department:" <<department << endl;
        cout << "Experience:" << experienceYears<<endl;
    }

// ==================== Course Class Implementation ====================

Course:: displayCourseInfo(){
cout << "Course:" << courseCode <<"-"<< courseName<<endl;
cout << "MaxStudents:" << maxStudents << endl;
cout << "Currently Enrolled:" << *students <<endl;    

}






// ==================== Main Function ====================
int main() {
   Course c = new Course();
    
    return 0;
}
