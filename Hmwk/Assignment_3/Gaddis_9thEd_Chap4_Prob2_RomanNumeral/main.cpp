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
    int num;
    cout << "Enter a number between 1 and 10:" << endl;
    cin >> num;
    
    
    switch(num)
    {
        case 1: 
            cout << num << " is I in Roman numerals";
            break;
        case 2: 
            cout << num << " is II in Roman numerals";
            break;
        case 3: 
            cout << num << " is III in Roman numerals";
            break;
        case 4: 
            cout << num << " is IV in Roman numerals";
            break;
        case 5: 
            cout << num << " is V in Roman numerals";
            break;
        case 6: 
            cout << num << " is VI in Roman numerals";
            break;
        case 7: 
            cout << num << " is VII in Roman numerals";
            break;
        case 8: 
            cout << num << " is VIII in Roman numerals";
            break;
        case 9: 
            cout << num << " is IX in Roman numerals";
            break;
        case 10: 
            cout << num << " is X in Roman numerals";
            break;
        default:
            cout << "Entered number is not valid, reenter number:" << endl;
    }
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}