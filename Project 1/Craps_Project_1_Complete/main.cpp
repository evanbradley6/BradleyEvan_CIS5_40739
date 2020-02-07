/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 6, 2020, 8:47 AM
 * Purpose:  Craps game with Preset Bets and 5 rounds Version 1,
 *      Version 2 will have input bets, and unlimited rounds
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
    
    //Declare Variable Data Types and Constant
    char initalRoll, reRoll; // so user can press enter to roll the dice
    int choice, point, round = 0; // User Bet Choice and User's point, and round initializer
    short total = 10; // User initial total amount is $10
    const int MAX = 6;// for maximum dots on a die side
    const int MIN = 1;// for minimum dots on a die side
    int die1;
    int die2;
    int sum;
    
    //Prompt User of the game
    cout << "Game of Craps" << endl 
            << "Start with $10 and select a bet amount" << endl
            << "Win = Get your bet back plus double your bet!" << endl
            << "Lose = Lose your bet!" << endl;
    //Set Random Number seed and put in a while loop so that program runs 5 times
   while(round < 5){
    //Obtain Each First roll number at the beginning of each round
    unsigned seed = time(0);
    srand(seed);
    die1 = (rand() % (MAX - MIN + 1)) + 1;
    die2 = (rand() % (MAX - MIN + 1)) + 1;
    sum = die1 + die2; 
   
     //Get User's Bet choice
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
      //Check choice variable for User bet choice and proceed to appropriate case
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
                        cout << "Your point is: " << point << endl;
                        //Re-roll and check if you get point
                        cout << "Press Enter to Re-roll." << endl;;
                                cin.get(reRoll);
                                die1 = rand()%(6 - 1) + 1;
                                die2 = rand()%(6 - 1) + 1;
                                sum = die1 + die2;
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
                        }
                    } 
            break;
            case 2: cout << "Press Enter to roll the dice!" << endl;
                    cin.get(initalRoll);
                    point = sum;
                    cout << sum << endl;
                    if(sum == 7 || sum == 11){
                        cout << "You rolled Lucky " << sum << "! You Win!!" << endl << endl;
                        total = total + 10;
                        cout << "Your total now is: $" << total << endl;
                    }
                    else if(sum == 2 || sum == 12){
                        cout << "Bad Luck, you rolled " << sum << " on your first roll! You lose!" << endl << endl;
                        total = total - 5;
                        cout << "Your total now is: $ " << total << endl;
                    }
                    else{
                        cout << "Your point is: " << point << endl;
                        //Re-roll and check if you get point
                        cout << "Press Enter to Re-roll." << endl;;
                        cin.get(reRoll);
                        die1 = rand()%(6 - 1) + 1;
                        die2 = rand()%(6 - 1) + 1;
                        sum = die1 + die2;
                // Check the point rolls to check if point then win, if 7 then love, if neither then re-roll
                        if(sum == point){
                            cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                            total = total + 10;
                            cout << "Your total is now: $" << total << endl;
                        }     
                        else if(sum == 7){
                            cout << "Bad Luck, you rolled " << sum << endl
                                    << "on your point roll. You lose!" << endl << endl;
                            total = total - 5;
                            cout << "Your Total is now: $" << total << endl;
                        }
                        else{
                            do{
                                cout << "You rolled: " << sum << endl;
                                cout << "Press Enter to Re-roll." << endl;;
                                cin.get(reRoll);
                                die1 = rand()%(6 - 1) + 1;
                                die2 = rand()%(6 - 1) + 1;
                                sum = die1 + die2;
                            }
                            while(sum != point && sum != 7);
                            if (sum != 7){
                                cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                                total = total + 10;
                                cout << "Your total is now: $" << total << endl;
                            }
                            else{
                                cout << "Bad Luck, you rolled " << sum << endl
                                    << "on your point roll. You lose!" << endl << endl;
                                total = total - 5;
                                cout << "Your Total is now: $" << total << endl;
                            }
                        }          
                    } 
            break;
            case 3: cout << "Press Enter to roll the dice!" << endl;
                    cin.get(initalRoll);
                    point = sum;
                    cout << sum << endl;
                    if(sum == 7 || sum == 11){
                        cout << "You rolled Lucky " << sum << "! You Win!!" << endl << endl;
                        total = total + 20;
                        cout << "Your total now is: $" << total << endl;
                    }
                    else if(sum == 2 || sum == 12){
                        cout << "Bad Luck, you rolled " << sum << " on your first roll! You lose!" << endl << endl;
                        total = total - 10;
                        cout << "Your total now is: $" << total << endl;
                    }
                    else{
                        cout << "Your point is: " << point << endl;
                        //Re-roll and check if you get point
                        cout << "Press Enter to Re-roll." << endl;;
                        cin.get(reRoll);
                        die1 = rand()%(6 - 1) + 1;
                        die2 = rand()%(6 - 1) + 1;
                        sum = die1 + die2;
                        // Check the point rolls to check if point then win, if 7 then love, if neither then re-roll
                        if(sum == point){
                            cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                            total = total + 20;
                            cout << "Your total is now: $" << total << endl;
                        }     
                        else if(sum == 7){
                            cout << "Bad Luck, you rolled " << sum << endl
                                    << "on your point roll. You lose!" << endl << endl;
                            total = total - 10;
                            cout << "Your Total is now: $" << total << endl;
                            }
                        else{
                            do{
                                cout << "You rolled: " << sum << endl;
                                cout << "Press Enter to Re-roll." << endl;;
                                cin.get(reRoll);
                            die1 = rand()%(6 - 1) + 1;
                                die2 = rand()%(6 - 1) + 1;
                                sum = die1 + die2;
                            }
                            while(sum != point && sum != 7);
                            if (sum != 7){
                                cout << "You rolled " << point << ", which is" << endl
                                    << "Your point. You Win!" << endl << endl;
                                total = total + 20;
                                cout << "Your total is now: $" << total << endl;
                            }
                            else{
                                cout << "Bad Luck, you rolled " << sum << endl
                                    << "on your point roll. You lose!" << endl << endl;
                                total = total - 10;
                                cout << "Your Total is now: $" << total << endl;
                            }
                        }                           
                    } 
            break;
        }
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
    
    
    
    //Initialize Variables

    
   
    //Display Outputs
    
    //Exit stage right!
    
    return 0;

}