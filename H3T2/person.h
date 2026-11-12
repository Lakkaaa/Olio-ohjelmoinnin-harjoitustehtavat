#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
public:
    Person(string);
    ~Person();
    string getName() const;
    virtual void sayStatus();
};

#endif // PERSON_H
