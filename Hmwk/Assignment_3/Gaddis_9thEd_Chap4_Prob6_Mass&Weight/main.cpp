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
    const int HEAVY = 1000, LIGHT=10;
    const double GRV = 9.8;
    double mass, weight;
    //Initialize Variables
    cout << "Enter the mass of an object:" << endl;
    cin >> mass;
    
    weight = mass * GRV;
    
    if(weight > HEAVY)
        cout << "The object is too heavy";
    else if(weight < LIGHT)
        cout << "The object is too light";
    else 
    {
        cout << setprecision(1) << fixed;
        cout << "The object weighs " << weight << " newtons";
    }
    
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}