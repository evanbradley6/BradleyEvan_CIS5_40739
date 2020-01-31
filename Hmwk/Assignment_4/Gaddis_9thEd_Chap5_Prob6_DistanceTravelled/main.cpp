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
    int speed, hrsTraveled, distance;
    //Initialize Variables
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hrsTraveled;
    cout << "Hour   Distance Traveled" << endl;
    //Process or map Inputs to Outputs
    for(int i = 1; i <= hrsTraveled; i++)
    {
        distance = speed * i;
        cout << i << setw(15) << distance << endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}