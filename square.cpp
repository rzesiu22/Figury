//
// Created by Bartek on 13.06.2024.
//

#include "square.h"
#include "circle.h"
#include "rectangle.h"

using namespace std;

Circle::Circle(double r)
{
    radius = r;
}
void Circle::setRadius (double r)
{
    radius = r;
}
double Circle::getArea() const
{
    return radius * radius * 3.1415926;
}
double Circle::getPerimeter() const
{
    return 2 * radius * 3.1415926;
}


Square::Square(int len)
{
    length = len;
}
void Square::setLength(int len)
{
    length = len;
}
int Square::getArea() const
{
    return length * length;
}
int Square::getPerimeter() const
{
    return 4 * length ;
}

Rectangle::Rectangle(int len, int w) {

    length = len;
    width = w;
}

void Rectangle::SetLength(int len)
{
    length = len;
}
void Rectangle::SetWidth(int w)
{
    width = w;
}
double Rectangle::getArea() const {
    return length*width;
}
double Rectangle::getPerimeter() const {
    return 2*(length+width);
}