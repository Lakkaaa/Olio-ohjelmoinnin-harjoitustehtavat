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

    void setBrand(string brnd) {
        brand = brnd;
    };
    void setModel(string mdl) {
        model = mdl;
    };
    void setYearModel(int yMdl) {
        yearModel = yMdl;
    };
};

#endif // CAR_H
