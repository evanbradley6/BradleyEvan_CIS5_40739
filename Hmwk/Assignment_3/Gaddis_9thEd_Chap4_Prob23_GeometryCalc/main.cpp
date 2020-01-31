/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const double PI = 3.14159;
    double base, circle, height, length, rectangle, radius, triangle, width;
    int choice;
    //Initialize Variables
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cin >> choice;
    //Display Outputs
    while(choice < 1 || choice > 4)
    {
        cout << "Invalid entry, Reenter:" << endl;
        cin >> choice;
    }
    if(choice == 1)
    {
        cout << "Enter the radius of the circle:" << endl;
        cin >> radius;
        while(radius < 0)
        {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> radius;
        }
        circle = PI * (radius * radius);
        cout << setprecision(1) << fixed;
        cout << "The area of the circle is " << circle;    
    }
     if(choice == 2)
    {
        cout << "Enter the length of the rectangle:" << endl;
        cin >> length;
        while(length < 0)
        {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> length;
        }
        cout << "Enter the height of the rectangle:" << endl;
        cin >> width;
        while(width < 0)
        {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> width;
        }
        rectangle = length * width;
        cout << setprecision(1) << fixed;
        cout << "The area of the rectangle is " << rectangle;    
    }
    if(choice == 3)
    {
        cout << "Enter the base of the triangle:" << endl;
        cin >> base;
        while(base < 0)
        {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> base;
        }
        cout << "Enter the height of the triangle:" << endl;
        cin >> height;
        while(height < 0)
        {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> height;
        }
        triangle = base * height * .5;
        cout << setprecision(1) << fixed;
        cout << "The area of the triangle is " << triangle;    
    }

    //Exit stage right!
    return 0;
}