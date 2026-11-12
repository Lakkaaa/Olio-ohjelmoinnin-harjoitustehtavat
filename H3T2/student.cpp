#include "student.h"

Student::Student(string n, int id):Person(n), studentID(id) {
    cout << "   Luotiin Student olio" << endl;
}

Student::~Student()
{
 cout << "   Student olio tuhottiin" << endl;
}

void Student::sayStatus()
{
    cout << "Olen Student, nimeni on: " << this->getName() << ", studentID: " << studentID << endl;
}

