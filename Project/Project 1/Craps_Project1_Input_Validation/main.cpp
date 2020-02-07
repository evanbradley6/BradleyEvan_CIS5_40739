/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on  February 4, 2020, 2:12 PM
 * Purpose:  Input Validation for range [1-3]
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
    int choice;
    //Initialize Variables
    cout << "Choose your bet amount:" << endl 
            << "1. $2" << endl 
            << "2. $5" << endl 
            << "3. $10" << endl;
    //User Selects Bet
        cin >> choice;
        cin.ignore(1,'\n'); // Allows user to press enter, and enter not be stored in keyboard for next cin.get()  call. 
    //Input Validation to make sure they chose a correct bet number, allows user to reinput bet choice
        while(choice < 1 || choice > 3){
        cout << "Please enter a valid option for betting amounts:" << endl;
        cin >> choice;
        cin.ignore(1,'\n');
        }
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}