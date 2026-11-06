#include "car.h"

Car::Car() {}

Car::Car(string brd, string mdl, int yMdl) {
    brand = brd;
    model = mdl;
    yearModel = yMdl;
};

void Car::printData() {
    cout << "Brand: " << brand << ", Model: " << model << ", Year Model: " << yearModel << endl;
}
