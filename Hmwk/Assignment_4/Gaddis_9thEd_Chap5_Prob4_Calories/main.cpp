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
    float calories, total;
    //Initialize Variables
    cout << "Enter how many calories are burned per minute:" << endl;
    cin >> calories;
    //Process or map Inputs to Outputs
    cout << "Min\tCalories burned" << endl;
    for(int i = 5; i <=30; i = i + 5)
    {
        total = i * calories;
        cout << setprecision(1) << fixed << showpoint;
        cout << i << "\t" << total << endl;
        
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}