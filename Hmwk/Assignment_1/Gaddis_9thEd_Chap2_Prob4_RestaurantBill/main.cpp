/* 
 * File:   main.cpp
 * Author: Evan Bradley
 * Created on January 12, 2020, 11:00 AM
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
int main() {
    //Set Random Number seed
    cout << setprecision(2) << fixed << endl;
    //Declare Variable Data Types and Constants
    float mealCharge = 88.67, taxPrct = 0.0675, tipPrct = 0.20,
            mealChargeTaxAmt = mealCharge * taxPrct,
            totMealChargeAmt = mealChargeTaxAmt + mealCharge,
            totMealTip = totMealChargeAmt * tipPrct,
            totBill = totMealTip + totMealChargeAmt; 
    
    cout << "The cost of the meal at a restaurant is $" << mealCharge << "." << endl;
    cout << "The tax amount on the meal is $" << mealChargeTaxAmt << "." << endl;
    cout << "The guests tipped the meal the amount of $" << totMealTip << "."<< endl;
    cout << "The total bill for the guests visit is $" << totBill << "." << endl;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}