/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 4, 2020, 7:46 PM
 * Purpose: Beginning of switch statement, and first case. This program will only cover the First roll parameters
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
    char initalRoll;
    int choice = 1; // Only testing case 1
    int point, sum, total= 10;
    cout << "Enter test sum number:" << endl;
    cin >> sum; // I put cin statement here so I can test program parameters. Garbage in, Garbage Out
    //Initialize Variables
     switch(choice){
            case 1: cout << "Press Enter to roll the dice!" << endl;
                    // User may press enter to output each roll
                    cin.get(initalRoll); 
                    //Assigns the point to sum, so the program may compare the point to future re-rolls
                    point = sum;
                    cout << sum << endl;
                    //Checks if user wins on first roll
                    if(sum == 7 || sum == 11){
                        cout << "You rolled Lucky " << sum << "! You Win!!" << endl << endl;
                        total = total + 4;
                        cout << "Your total now is: $" << total << endl;
                    }
                    //Checks if USer loses on first roll
                    else if(sum == 2 || sum == 12){
                        cout << "Bad Luck, you rolled " << sum << " on your first roll! You lose!" << endl << endl;
                        total = total - 2;
                        cout << "Your total now is: $ " << total << endl;
                    }
                    else{
                        //Sends point to output, so user know which reroll may score
                        cout << "Your point is: " << point << endl;}
    //Process or map Inputs to Outputs
     }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}