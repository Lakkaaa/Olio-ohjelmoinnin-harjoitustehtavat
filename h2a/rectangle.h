#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();

    double getArea();
    double getCircum();

    void setWidth(double newWidth);
    void setHeight(double newHeight);

    ~Rectangle();
};

#endif // RECTANGLE_H
