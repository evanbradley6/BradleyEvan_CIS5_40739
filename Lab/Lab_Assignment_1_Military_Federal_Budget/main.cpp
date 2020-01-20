/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 10, 2020, 12:23 PM
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
    const int CNVPERC=100;//Conversion to Percentage
    float fedBudg,milBudg;//Budgets in Dollars 2020
    float percMil;//Percentage compared to total federal budget
    //Initialize Variables
    milBudg=7.0e11f;
    fedBudg=4.1e12f; 
    
    //Process or map Inputs to Outputs
    cout<<"Federal Budget  = $"<<fedBudg<<endl;
    cout<<"Military Budget = $"<<milBudg<<endl;
    cout<<"Military Budget = "<<milBudg/fedBudg*CNVPERC<<"%"<<endl;
    //Display Outputs

    //Exit stage right!
    return 0;
}