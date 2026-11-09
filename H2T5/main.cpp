#include <iostream>
#include "coffeemaker.h"

using namespace std;

int main()
{
    CoffeeMaker objDispenser1(20, 10);
    objDispenser1.showStatus();
    objDispenser1.showBrews();

    //  objDispenser1.brewCoffee(); Unsuccesful. Not enough ingredients and
    // power is off

    cout << endl << "*************** FIRST BREW ******************" << endl << endl;

    // Let's add wtaer
    objDispenser1.addWater(8.0);

    // Pour sum beans in that son of a bean
    objDispenser1.addBeans(8.0);

    // Switch it on
    objDispenser1.start();

    // Brew coffee!
    objDispenser1.brewCoffee();

    // Let's check the state and number of brews

    objDispenser1.showStatus();
    objDispenser1.showBrews();

    cout << endl << "*************** SECOND BREW *****************" << endl << endl;
    // Brew 2 cups and state check.
    // objDispenser1.stop();
    objDispenser1.brewCoffee();
    objDispenser1.brewCoffee();

    objDispenser1.showStatus();
    objDispenser1.showBrews();

    cout << endl;

    return 0;
}
