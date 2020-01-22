/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 18, 2020, 1:44 PM
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
    float F, C;
    //Initialize Variables
    
    
    
    //Process or map Inputs to Outputs
    cout << setprecision(1) << fixed << right;
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> F;
    C = (5.0/9.0) * (F - 32.0);
    cout << F << " Degrees Fahrenheit = " << C 
            << " Degrees Centigrade";
    //Display Outputs

    //Exit stage right!
    return 0;
}