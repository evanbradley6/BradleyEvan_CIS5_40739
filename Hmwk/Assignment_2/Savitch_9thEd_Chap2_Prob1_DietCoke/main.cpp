/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 20, 2020, 11:00 AM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    const float FAKE_SWEETNER = 0.001f,
            SODA_WEIGHT = 350;
    int numCans;
    float weight,
            totalSoda,
            killPerson,
            killMouse = 5,
            weightMouse = 35,
            sodaPrct,
            death;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> weight;
    
    sodaPrct = FAKE_SWEETNER * SODA_WEIGHT;
    
    killMouse = killMouse / weightMouse;
    killPerson = killMouse * (weight / weightMouse);
    
    death = killPerson * weight;
    
    death = death / sodaPrct; 
    
    cout << "The maximum number of soda pop cans" << endl;
   
    cout << "which can be consumed is " << death << " cans";
    //Exit stage right!
    return 0;
}