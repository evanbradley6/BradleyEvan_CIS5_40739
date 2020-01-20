/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 12, 2020, 10:03 AM
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
int main() {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int purchase = 95.0;
    float stateSalesTax = .04, countySalesTax = .02;
    
    cout << setprecision(2) << fixed << endl;
    
    float totalStateSalesTax = purchase * stateSalesTax,
            totalCountySalesTax = purchase * countySalesTax;
    
    cout << endl;
    cout << "The total state sales tax on a $95 dollar purchase is $"
            << totalStateSalesTax << endl;
    cout << "The total county sales tax on a $95 dollar purchase is $" 
            << totalCountySalesTax << endl; //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}