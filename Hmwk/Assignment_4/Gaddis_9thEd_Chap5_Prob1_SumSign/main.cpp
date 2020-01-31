/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
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
    int num,
            sum = 0;
    cout << "Enter a positive integer value:" << endl;
    cin >> num;
    while (num < 0)
    {
        cout << "Invalid value. Reenter:" << endl;
        cin >> num;
    }
    
    for(int i = 1; i <= num; i++)
    {
        sum = sum + i; 
    }
    
    cout << "The sum of all the integers from 1 to " << num
            << " is " << sum;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}