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
    const int AIR = 1100, WATER = 4900, STEEL = 16400;
    int choice;
    double time, distance;
    //Initialize Variables
    cout << "Choose which medium the sound wave will travel in." << endl;
    cout << "1.Air" << endl << "2.Water" << endl << "3.Steel" << endl;
    cin >> choice;
    cout << "Enter the distance the wave will travel:" << endl;
    cin >> distance;
    //Process or map Inputs to Outputs
    if(choice == 1 && distance >= 0)
    {
        time = distance / AIR;
        cout << setprecision(4) << fixed;
        cout << "The wave will take " << time << " seconds";
    }
    else if(choice == 2 && distance >= 0)
    {
        time = distance / WATER;
        cout << setprecision(4) << fixed;
        cout << "The wave will take " << time << " seconds";
    }
    else if(choice == 3 && distance >= 0)
    {
        time = distance / STEEL;
        cout << setprecision(4) << fixed;
        cout << "The wave will take " << time << " seconds";
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}