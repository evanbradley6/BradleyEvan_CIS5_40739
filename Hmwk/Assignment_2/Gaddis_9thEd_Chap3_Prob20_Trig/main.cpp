/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 19, 2020, 2:08 PM
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
    double angle, cnv, pi, sinAns, cosAns, tanAns;
    //Initialize Variables
    pi = 3.14159f;
    cnv = pi / 180;
    //Process or map Inputs to Outputs
    
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees " << endl;
    cin >> angle;
    
    sinAns = sin(angle * cnv);
    cosAns = cos(angle * cnv);
    tanAns = tan(angle * cnv);
           
    cout << fixed;
    cout << setprecision(0) << "sin(" << angle <<") = " << setprecision(4) << sinAns << endl;
    cout << setprecision(0) << "cos(" << angle <<") = " << setprecision(4) << cosAns << endl;
    cout << setprecision(0) << "tan(" << angle <<") = " << setprecision(4) << tanAns;
    
          
    //Display Outputs

    //Exit stage right!
    return 0;
}