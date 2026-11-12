#include "teacher.h"

Teacher::Teacher(string n, int id):Person(n), departmentID(id) {
    cout << "   Luotiin Teacher olio" << endl;
}

Teacher::~Teacher()
{
    cout << "   Teacher olio tuhottiin" << endl;
}

void Teacher::sayStatus()
{
    cout << "Olen Teacher, nimeni on: " << this->getName() << ", osastoni id on: " << departmentID << endl;
}
