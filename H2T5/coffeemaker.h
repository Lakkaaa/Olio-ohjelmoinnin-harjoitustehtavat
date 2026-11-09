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
    int brews = 0;
    bool state = false;
public:
    CoffeeMaker(float wTankVolume, float bTankCapacity);
    void start();
    void stop();
    void addWater(float wAmount);
    void addBeans(float bAmount);
    void brewCoffee();
    void showStatus();
    void showBrews();
};

#endif // COFFEEMAKER_H
