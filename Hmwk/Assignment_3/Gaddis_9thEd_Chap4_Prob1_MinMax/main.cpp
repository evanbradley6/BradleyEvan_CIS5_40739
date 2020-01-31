/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 24, 2020, 12:23 PM
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
    int num1;
    int num2;
    
    //Initialize Variables
    cout << "Enter a number:" << endl;
    cin >> num1;
    cout << "Enter a number:" << endl;
    cin >> num2;
    
    //Process or map Inputs to Outputs
    if(num1 > num2){
        cout << num1 << " is larger";
    }
    else {
        cout << num2 << " is larger";
    }
    //Display Outputs
 
    //Exit stage right!
    return 0;
}