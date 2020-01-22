/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 19, 2020, 3:17 PM
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
    const float INSURE_PRCT = 0.80; 
    float replace_cost, min_amt_insure; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> replace_cost; 
    // calculate min. amount for insurance
    min_amt_insure = replace_cost * INSURE_PRCT;
   
    cout << "You need $" << min_amt_insure << " of insurance.";
    //Exit stage right!
    return 0;
}