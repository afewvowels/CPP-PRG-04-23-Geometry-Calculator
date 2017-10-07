//
//  main.cpp
//  PRG-4-23-Geometry-Calculator
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that displays the following menu:
//
//  Geometry Calculator
//
//      1. Calculate the Area of a Circle
//      1. Calculate the Area of a Rectangle
//      1. Calculate the Area of a Triangle
//      1. Quit
//
//  If the user enters 1, the program should ask for the radius of the circle then display its
//  area. Use the following formula:
//  area = PIr^2
//  Use 3.14159 for PI and the radius of the circle for r. If the user enters 2, the program
//  should ask for the length and width of the rectangle, then display the rectangle's area.
//  Use the following formula:
//  area = length * width
//  If the user enters 3, the program should ask for the length of the triangle's base and its
//  height, then display the area. Use the following formula:
//  area = base * height * .5
//  If the user enters 4, the program should end.
//
//  Input Validation: Display an error message if the user enters a number outside the range
//  of 1 through 4 when selecting an item from the menu. Do not accept negative values
//  for the circle's radius, the rectangle's length or width, or the triangle's base or height.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int intUserInput;
    
    const int INT_MENU_CIRCLE = 1,
              INT_MENU_RECTANGLE = 2,
              INT_MENU_TRIANGLE = 3,
              INT_MENU_QUIT = 4;
    
    float fltCircleRadius,
          fltCircleArea,
    
          fltRectangleLength,
          fltRectangleWidth,
          fltRectangleArea,
    
          fltTriangleBase,
          fltTriangleHeight,
          fltTriangleArea;
    
    const float FLT_PI = 3.14159;
    
    cout << "Geometry Calculator:\n\n"
         << "\t1. Calculate the Area of a Circle\n"
         << "\t2. Calculate the Area of a Rectangle\n"
         << "\t3. Calculate the Area of a Triangle\n"
         << "\t4. Quit\n";
    cin >> intUserInput;
        while(!cin || intUserInput < 0 || intUserInput > 4)
        {
            cout << "ERROR: VALUE OUT OF RANGE\n";
            cin.clear();
            cin.ignore();
            cin >> intUserInput;
        }
    
    switch(intUserInput)
    {
        case INT_MENU_CIRCLE:
            cout << "Please enter a radius:\n";
            cin >> fltCircleRadius;
                while(!cin || fltCircleRadius < 0.0f || fltCircleRadius > 1000000.0f)
                {
                    cout << "ERROR: VALUE OUT OF RANGE(0-1,000,000)\n";
                    cin.clear();
                    cin.ignore();
                    cin >> fltCircleRadius;
                }
            fltCircleArea = FLT_PI * pow(fltCircleRadius, 2.0f);
            cout << "With a radius of "
                 << fltCircleRadius
                 << " your circle has an area of "
                 << fltCircleArea << endl;
            break;
            
        case INT_MENU_RECTANGLE:
            cout << "Please enter a length:\n";
            cin >> fltRectangleLength;
                while(!cin || fltRectangleLength < 0.0f || fltRectangleLength > 1000000.0f)
                {
                    cout << "ERROR: VALUE OUT OF RANGE(0-1,000,000)\n";
                    cin.clear();
                    cin.ignore();
                    cin >> fltRectangleLength;
                }
            cout << "Please enter a width:\n";
            cin >> fltRectangleWidth;
                while(!cin || fltRectangleWidth < 0.0f || fltRectangleWidth > 1000000.0f)
                {
                    cout << "ERROR: VALUE OUT OF RANGE(0-1,000,000)\n";
                    cin.clear();
                    cin.ignore();
                    cin >> fltRectangleWidth;
                }
            fltRectangleArea = fltRectangleLength * fltRectangleWidth;
            cout << "With a length of "
                 << fltRectangleLength
                 << " and a width of "
                 << fltRectangleWidth
                 << " your rectangle has an area of "
                 << fltRectangleArea << endl;
            break;
            
        case INT_MENU_TRIANGLE:
            cout << "Please enter a base:\n";
            cin >> fltTriangleBase;
                while(!cin || fltTriangleBase < 0.0f || fltTriangleBase > 1000000.0f)
                {
                    cout << "ERROR: VALUE OUT OF RANGE(0-1,000,000)\n";
                    cin.clear();
                    cin.ignore();
                    cin >> fltTriangleBase;
                }
            cout << "Please enter a height:\n";
            cin >> fltTriangleHeight;
                while(!cin || fltTriangleHeight < 0.0f || fltTriangleHeight > 1000000.0f)
                {
                    cout << "ERROR: VALUE OUT OF RANGE(0-1,000,000)\n";
                    cin.clear();
                    cin.ignore();
                    cin >> fltTriangleHeight;
                }
            fltTriangleArea = fltTriangleBase * fltTriangleHeight * 0.5f;
            cout << "With a base of "
                 << fltTriangleBase
                 << " and a height of "
                 << fltTriangleHeight
                 << " your triangle has an area of "
                 << fltTriangleArea << endl;
            break;
            
        case INT_MENU_QUIT:
            cout << "You have quit the application.\n";
            break;
    }
    
    return 0;
}

