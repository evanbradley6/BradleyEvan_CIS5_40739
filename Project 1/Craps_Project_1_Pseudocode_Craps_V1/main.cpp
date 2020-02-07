/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on February 6, 2020, 8:47 AM
 * Purpose:  Pseudocode of Craps game with Preset Bets 
 *      and 5 rounds Version 1,
 *      Version 2 will have input bets, and unlimited rounds
 */

//System Libraries
//Input Output library
//Random Numbers
//Time to set the Seed
 // Namespace std of libraries

//User Libraries

//Global Constants - No Global Variables

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

// Main
    
    //Declare Variable Data Types and Constant and initialize
     // 2 char variables user can press enter to roll the dice
     // User Bet Choice and User's point, and round initializer
     // User initial total amount is $10
// for maximum dots on a die side
    // for minimum dots on a die side
  // two integers to hold die numbers, one integer for sum of the two
 
    
    
    //Prompt User of the game
    
    //Set Random Number seed and put whole program in a while loop so that program runs 5 times
   
    //Obtain Each First roll number at the beginning of each round, each random number for a die
// obtain the sum of two die and this is first roll
    
   
     //Get User's Bet choice
   
    //User Selects Bet
        // Allows user to press enter, and enter not be stored in keyboard for next cin.get()  call. 
    //Input Validation to make sure they chose a correct bet number, allows user to reinput bet choice
       
      //Check choice variable for User bet choice and proceed to appropriate case
        switch(choice){
            // case 1 every total is -2 on loss and +4 on win
            
                    // User may press enter to output each roll
                    
                    //Assigns the point to sum, so the program may compare the point to future re-rolls
                  //if
                    //Checks if user wins on first roll
                    //else if
                    //Checks if User loses on first roll
                    //else
                        //Sends point to output, so user know which reroll value may score
                       
                        //Re-roll and check if you get point
                        //if
                        // Check to see if reroll sum is point, then win
                         //else if 
                        //Check if reroll sum is 7, then lose        
                       
                       //else
                            //Do-while loop b/c it must roll again b/c current roll is not win point or lose point
                            //while
                            //Want loop to run while the roll is neither the win point nor the lose point, then move on
                           //if
                            //Check roll to see if not lose point, then win, b/c you took out all other possibilities with previous loop
                            //else
                            //Anything else is 7, which loses.
            //break; end of case 1
            //repeat the same for case 2, and case 3
            // after break of case 3
        //Each iteration will show each round number to the User,
            //so they know how much money they have going into each round.
            //if
            //round == 0, then output round 1
            // else if : till round == 3, output respective round numbers
            //else: this is last round, so output total earnings as well
      
        //Increment rounds so loop doesn't go infinite. 
    
    //Exit stage right!
    
   