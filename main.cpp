#include <iostream>
#include "square.h"
#include "circle.h"
#include "rectangle.h"


using namespace std;

int main()
{

    double radius = 0;
    int length = 0;
    int width = 0;
    Square square;
    Circle circle;
    Rectangle rectangle;
    int choice;

    cout << "Press 1-6 on which shape's area or perimeter would you like to calculate\n\n"
            "1.) Area of circle\n"
            "2.) Area of square\n"
            "3.) Area of rectangle\n"
            "4.) Perimeter of circle\n"
            "5.) Perimeter of square\n"
            "6.) Perimeter of rectangle\n"<< endl;
    cout << "\nEnter your choice: " << endl;
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            circle.getPerimeter();
            cout << "\n Area of the circle is " << circle.getArea();
            break;
        }
        case 2: {
            cout << "\n Enter length of the square's side: ";
            cin >> length;
            square.setLength(length);
            cout << "\n Area of the square is " << square.getArea();
            break;
        }
        case 3: {
            cout <<"\n Enter the value of length and width of the rectangle: ";
            cin >> length;
            cin >> width;
            rectangle.SetLength(length);
            rectangle.SetWidth(width);
            cout << "\n Area of the rectangle is " << rectangle.getArea();
            break;
        }
        case 4: {
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            cout << "\n Perimeter of the circle is " << circle.getPerimeter();
            break;
        }
        case 5: {
            cout << "\n Enter the length of the square's side: ";
            cin >> length;
            square.setLength(length);
            cout << "\n Perimeter of the square is " << square.getPerimeter();
            break;
        }
        case 6:{
            cout <<"\n Enter the value of length and width of the rectangle: \n";
            cin >> length;
            cin >> width;
            rectangle.SetLength(length);
            rectangle.SetWidth(width);
            cout << "\n Perimeter of the rectangle is " << rectangle.getPerimeter();
            break;
        }

        default: cout<<"\n Please enter a valid choice!";
            break;
    }

    return 0;
}