#ifndef UNTITLED39_SQUARE_H
#define UNTITLED39_SQUARE_H


using namespace std;

class Square
{
private:
    int length;

public:
    Square(int length = 0);
    void setLength(int length);
    int getArea()const;
    int getPerimeter()const;
};


#endif //UNTITLED39_SQUARE_H