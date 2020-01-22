/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 19, 2020, 2:56 PM
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
    const int AMT_PER_BAG = 40,
              SERV_PER_BAG = 10,
              CAL_PER_SERV = 300;
    float amt_ate, 
            serv_ate,
            cal_ate,
            
            amt_per_serv = AMT_PER_BAG / SERV_PER_BAG;
            
           
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> amt_ate;
      // number of servings
    serv_ate = amt_ate / amt_per_serv;
    // calories consumed
    cal_ate = serv_ate * CAL_PER_SERV;
    
    cout << "You consumed " << cal_ate << " calories.";
    //Exit stage right!
    return 0;
}