//
// Created by Bartek on 13.06.2024.
//

#ifndef UNTITLED39_CIRCLE_H
#define UNTITLED39_CIRCLE_H

using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double radius = 0);
    void setRadius(double radius);
    double getArea()const;
    double getPerimeter()const;
};

#endif //UNTITLED39_CIRCLE_H
