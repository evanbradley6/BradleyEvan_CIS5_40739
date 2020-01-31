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
    int num;
    //Initialize Variables
    cout << "Enter how many books you purchased this month:" << endl;
    cin >> num;
    //Process or map Inputs to Outputs
    if(num == 0)
        cout << "You earned 0 points.";
    else if(num == 1)
        cout << "You earned 5 points.";
    else if(num == 2)
        cout << "You earned 15 points.";
    else if(num == 3)
        cout << "You earned 30 points.";
    else if(num >= 4)
        cout << "You earned 60 points.";
    
    //Exit stage right!
    return 0;
}