#include "coffeemaker.h"

//CoffeeMaker::CoffeeMaker() {}

CoffeeMaker::CoffeeMaker(float wTankVolume, float bTankCapacity)
{
    waterTankVolume = wTankVolume;
    beanTankCapacity = bTankCapacity;
}
// The above constructor can also be done like this:
// CoffeeMaker::CoffeeMaker(float wTankVolume, float bTankCapacity): waterTankVolume(wTankVolume), beanTankCapacity(bTankCapacity)
// {}

void CoffeeMaker::start()
{
    state = true;
}

void CoffeeMaker::stop()
{
    state = false;
}

void CoffeeMaker::addWater(float wAmount)
{
    if(waterTankVolume >= waterAmount + wAmount) {
        waterAmount += wAmount;
    } else {
        cout << "Water overspill!" << endl;
    }

}

void CoffeeMaker::addBeans(float bAmount)
{
    if(beanTankCapacity >= beanAmount + bAmount) {
        beanAmount += bAmount;
    } else {
        cout << "Bean overspill!" << endl;
    }

}

void CoffeeMaker::brewCoffee()
{
    // Let's agree that we should have at least 2 dl of water
    // and 1 dl of beans.
    if(state == true && waterAmount >= 2 && beanAmount >= 1) {
        cout << "Coffee will be done shortly!" << endl;
        brews ++;
        waterAmount -= 2;
        beanAmount -= 1;
    } else {
        cout << "Check coffeemaker's power and the amount of ingredients." << endl;
    }
}

void CoffeeMaker::showStatus()
{
    cout << "Water in the coffeemaker: " << waterAmount << " dl" << endl;
    cout << "Bean amount in the coffeemaker: " << beanAmount << " dl"<< endl;
    if (state == false) {
        cout << "Coffeemaker is OFF" << endl;
    } else {
        cout << "Coffeemaker is ON" << endl;
    }
}

void CoffeeMaker::showBrews()
{
    cout << "The coffeemaker has brewed " << brews << " cup(s) of coffee." << endl;
}
