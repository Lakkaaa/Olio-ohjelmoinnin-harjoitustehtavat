#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person
{
private:
    int departmentID;
public:
    Teacher(string, int);
    ~Teacher();
    virtual void sayStatus();
};

#endif // TEACHER_H
