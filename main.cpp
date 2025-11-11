#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
void Person::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
}

// ==================== Student Class Implementation ====================
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








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
