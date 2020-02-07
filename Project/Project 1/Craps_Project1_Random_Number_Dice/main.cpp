/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 5, 2020, 4:15 PM
 * Purpose:  Develop random numbers for two die
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
      unsigned seed = time(0);
    //Declare Variable Data Types and Constants
    const int MAX = 6;
    const int MIN = 1;
    int die1, die2, sum;
    //Initialize Variables
  
    srand(seed);
    die1 = (rand() % (MAX - MIN + 1)) + 1;
    die2 = (rand() % (MAX - MIN + 1)) + 1;
    sum = die1 + die2;
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << die1 << " + " << die2 << " = " << sum;

    //Exit stage right!
    return 0;
}