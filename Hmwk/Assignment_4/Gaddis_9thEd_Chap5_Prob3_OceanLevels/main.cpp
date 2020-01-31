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
    float rise, total;
    //Initialize Variables
    cout << "Enter how many millimeters the ocean is rising per year:" << endl;
    cin >> rise;
    total = rise;
    //Process or map Inputs to Outputs
    cout << "Year\tRise(mm)" << endl;
    for(int year = 1; year <=30; year++)
    {
        cout << setprecision(1) << fixed << showpoint;
        cout << year << "\t" << total << endl;
        total = total + rise;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}