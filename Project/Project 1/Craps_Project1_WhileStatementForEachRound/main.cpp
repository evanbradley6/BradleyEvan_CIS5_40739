/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 5, 2020, 5:33 PM
 * Purpose:  The while statement that will encompass the program to make it go only 5 rounds.
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
    //Must initialize round to 0 so you can use it to compare to 5 and increment to get 5 rounds.
    int round = 0, total;
    //Initialize Variables
    while(round < 5){
    //Process or map Inputs to Outputs
     //Each iteration will show each round number to the User, so they know how much money they have going into each round.
        if(round == 0)
            cout << "That was round 1!" << endl << endl;
        else if(round == 1)
            cout << "That was round 2!" << endl << endl;
        else if(round == 2)
            cout << "That was round 3!" << endl << endl;
        else if(round == 3)
            cout << "That was round 4!" << endl << endl;
        else{
            cout << "That was round 5, the last round!" << endl
                    << endl << "Your total earnings are: $" << total;
        }
        //Increment rounds so loop doesn't go infinite. 
       round++;
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}