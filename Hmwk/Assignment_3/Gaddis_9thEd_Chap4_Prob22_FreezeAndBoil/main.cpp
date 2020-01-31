/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
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
    const int ETHYL_FREEZE = -173, ETHYL_BOIL = 172,
            HG_FREEZE = -38, HG_BOIL = 676,
            O_FREEZE = -362, O_BOIL = -306,
            WATER_FREEZE = 32, WATER_BOIL = 212;
    int temp;
    //Initialize Variables
    cout << "Enter a temperature:" << endl; 
    cin >> temp;
    //Process or map Inputs to Outputs
    if(temp <= ETHYL_FREEZE)
        cout << "Ethyl alcohol will freeze" << endl;
    if(temp <= HG_FREEZE)
        cout << "Mercury will freeze" << endl;
    if(temp <= O_FREEZE)
        cout << "Oxygen will freeze" << endl;
    if(temp <= WATER_FREEZE)
        cout << "Water will freeze" << endl;
    if(temp >= ETHYL_BOIL)
        cout << "Ethyl alcohol will boil" << endl;
    if(temp >= HG_BOIL)
        cout << "Mercury will boil" << endl;
    if(temp >= O_BOIL)
        cout << "Oxygen will boil" << endl;
    if(temp >= WATER_BOIL)
        cout << "Water will boil" << endl;
    
     
    //Display Outputs

    //Exit stage right!
    return 0;
}