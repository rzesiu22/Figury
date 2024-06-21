//
// Created by Bartek on 13.06.2024.
//

#ifndef UNTITLED39_RECTANGLE_H
#define UNTITLED39_RECTANGLE_H

using namespace std;

class Rectangle
{
private:
    int length, width;
public:
    Rectangle(int length=0,int width=0);
    void SetLength(int length);
    void SetWidth(int width);
    double getArea()const;
    double getPerimeter()const;
};

#endif //UNTITLED39_RECTANGLE_H
