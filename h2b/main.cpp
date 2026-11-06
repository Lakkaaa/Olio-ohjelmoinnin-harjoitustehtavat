#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back(Car("Nissan", "Kouki", 1997));
    carList.emplace_back(Car("Toyota", "Chaser", 1997));
    carList.emplace_back(Car("Lexus", "IS300", 2001));

    cout << "Second element of the list: ";
    carList[1].printData();

    cout << "===================================" << endl;

    cout << "Every object in the list: " << endl;
    for(Car &objC: carList) {
        objC.printData();
    }

    return 0;
}
