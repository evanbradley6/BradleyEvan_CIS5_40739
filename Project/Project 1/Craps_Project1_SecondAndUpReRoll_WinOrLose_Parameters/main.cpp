/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 5, 2020, 10:54 PM
 * Purpose:  This program handles the rerolls after the initial roll and after the first reroll. Uses do-while loop to run thu another reroll, 
 * then parameters test for either point, or losing point which is 7
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
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
    int die1, die2, sum, total = 10, point;
    char reRoll;
    //Initialize Variables
    cout << "Enter sum number and point number respective: " << endl;
    cin >> sum >> point;
    cin.ignore(2,'\n');
    
    //Process or map Inputs to Outputs
    if(sum < 0)
        cout << "Test if statement";
     else{
                            //Do-while loop b/c it must roll again b/c current roll is not win point or lose point
                            do{
                                cout << "You rolled: " << sum << endl;
                                cout << "Press Enter to Re-roll." << endl;;
                                cin.get(reRoll);
                                die1 = rand()%(6 - 1) + 1;
                                die2 = rand()%(6 - 1) + 1;
                                sum = die1 + die2;
                            }
                            //Want loop to run while the roll is neither the win point nor the lose point, then move on
                            while(sum != point && sum != 7);
                            //Check roll to see if not lose point, then win, b/c you took out all other possibilities with previous loop
                            if (sum != 7){
                                cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                                total = total + 4;
                                cout << "Your total is now: $" << total << endl;
                        }
                            //Anything else is 7, which loses.
                            else{
                                cout << "Bad Luck, you rolled " << sum << endl
                                << "on your point roll. You lose!" << endl << endl;
                                total = total - 2;
                                cout << "Your Total is now: $" << total << endl;
                            }
    //Display Outputs}
     }
    //Exit stage right!
    return 0;
}