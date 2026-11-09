#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H
#include <iostream>
using namespace std;

class CoffeeMaker
{
private:
    float waterTankVolume;
    float waterAmount = 0;
    float beanTankCapacity;
    float beanAmount = 0;

    bool state;
public:
    CoffeeMaker();
    void start();
    void stop();
    void addWater(float wAmount);
    void addBeans(float bAmount);
    void brewCoffee();
};

#endif // COFFEEMAKER_H
