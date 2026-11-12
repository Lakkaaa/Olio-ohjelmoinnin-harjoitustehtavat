#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
private:
    int studentID;
public:
    Student(string, int);
    ~Student();
    virtual void sayStatus() override;
};

#endif // STUDENT_H
