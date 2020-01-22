/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 19, 2020, 2:34 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    const int NUM_SCRS = 5;
    float scr1, scr2, scr3, scr4, scr5, avg;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout << "Input 5 numbers to average " << endl;
    
    cin >> scr1 >> scr2 >> scr3 >> scr4 >> scr5;
   
    avg = (scr1 + scr2 + scr3 + scr4 + scr5) / NUM_SCRS;
    cout << setprecision(1) << fixed;
    cout << "The average = " << avg;
    //Display Outputs

    //Exit stage right!
    return 0;
}