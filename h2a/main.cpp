#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    Car objCar;

    objCar.setBrand("Lincoln");
    objCar.setModel("Continental");
    objCar.setYearModel(1979);

    objCar.printData();

    cout << "==========================================" << endl;

    Rectangle *objRectangle = new Rectangle();

    double area;
    double circumference;

    objRectangle->setHeight(5);
    objRectangle->setWidth(8);

    area = objRectangle->getArea();
    circumference = objRectangle->getCircum();

    cout << "Area is: " << area << " and the circumference is: " << circumference << endl;

    delete objRectangle;
    objRectangle = nullptr;

    cout << "==========================================" << endl;

    unique_ptr<Student> objStudent = make_unique<Student>("Oppilas Oppinen", 123, 9.2);

    string name = objStudent->getName();
    int studentNumber = objStudent->getStudentNumber();
    double average = objStudent->getAverage();

    cout << "Name: " << name << ", Student ID: " << studentNumber << ", Average: " << average << endl;

    return 0;
}
