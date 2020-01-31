/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int height1, height2, width1, width2, area1, area2;
    
    //Initialize Variables
    cout << "Enter the width of rectangle 1:" << endl;
    cin >> width1;
    cout << "Enter the height of rectangle 1:" << endl;
    cin >> height1;
    cout << "Enter the width of rectangle 2:" << endl;
    cin >> width2;
    cout << "Enter the height of rectangle 2:" << endl;
    cin >> height2;
    //Process or map Inputs to Outputs
    area1 = width1 * height1;
    area2 = width2 * height2;
    
    //Display Outputs
    if(area1 > area2)
        cout << "Rectangle 1 has the greater area";
    else if(area2 > area1)
        cout << "Rectangle 2 has the greater area";
    else if(area2 == area1)
        cout << "The rectangles have the same area";
    //Exit stage right!
    return 0;
}