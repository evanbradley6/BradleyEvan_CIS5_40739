/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 4, 2020, 8:45 PM
 * Purpose:  Case 1 still. This program handles the first reroll statement parameters. If one rolls 7, automatically lose, if one rolls their point, then they win.
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    unsigned seed = time(0);
    srand(seed);
    
    
    //Declare Variable Data Types and Constants
    int sum, die1, die2, point, total = 10;
    char reRoll;
    cout << "Enter test point and sum numbers respective: " << endl;
    cin >> point >> sum;
    cin.ignore(2, '\n');
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    if(sum == 7 || sum == 11 || sum == 12 || sum == 2)
        cout << "Test if statement." << endl << endl;
    else{
                        //Sends point to output, so user know which reroll may score
                        cout << "Your point is: " << point << endl;
                        //Re-roll and check if you get point
                        cout << "Press Enter to Re-roll." << endl;;
                                cin.get(reRoll);
                                die1 = rand()%(6 - 1) + 1;
                                die2 = rand()%(6 - 1) + 1;
                                sum = die1 + die2;
                                cout << sum << endl;
                        // Check to see if reroll sum is point, then win
                        if(sum == point){
                            cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                            total = total + 4;
                            cout << "Your total is now: $" << total << endl;
                        }    
                        //Check if reroll sum is 7, then lose        
                        else if(sum == 7){
                            cout << "Bad Luck, you rolled " << sum << endl
                                    << "on your point roll. You lose!" << endl << endl;
                            total = total - 2;
                            cout << "Your Total is now: $" << total << endl;
                        }
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}