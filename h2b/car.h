#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();

    void printData();
    Car(string, string, int);
};

#endif // CAR_H
