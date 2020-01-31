/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int floors, rooms, occupied, unoccupied,
            totOccupied = 0, 
            totUnoccupied = 0;
    float prct, totRoom;
    //Initialize Variables
    cout << "Enter how many floors there are:" << endl;
    cin >> floors;
    while(floors < 1)
    {
        cout << "Invalid value. Reenter:" << endl;
        cin >> floors;
    }
    
    for(int i = 1; i <= floors; i++)
    {
        cout << "Enter how many rooms are on floor " << i << ":" << endl;
        cin >> rooms;
        if(i == 13) 
            cout << "Skipping this floor";
       
        while(rooms < 10)
        {
            cout << "Invalid value. Reenter:" << endl;
            cin >> rooms;
        }
        cout << "Enter how many are occupied:" << endl;
        cin >> occupied;
        unoccupied = rooms - occupied;
        totOccupied = totOccupied + occupied;
        totUnoccupied = totUnoccupied + unoccupied;
    }
    //Process or map Inputs to Outputs
    totRoom = totOccupied + totUnoccupied;
    prct = (totOccupied / totRoom) * 100;
    cout << "There are " << totOccupied << " rooms occupied." << endl;
    cout << "There are " << totUnoccupied << " rooms unoccupied." << endl;
    cout << setprecision(1) << fixed;
    cout << prct << "% of rooms are occupied.";
    
            
    //Display Outputs

    //Exit stage right!
    return 0;
}