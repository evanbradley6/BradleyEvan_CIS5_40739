/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include<iostream>
#include <iomanip>
using namespace std;
float buyDeepFriedTwinkie(float dollar){
   char input;
   float total = 0;
   while(total <= 3.50){
      
       cout<<"Please insert coins:"<<endl;
       cout<<"n - Nickel"<<endl;
       cout<<"d - Dime"<<endl;
       cout<<"q - Quarter"<<endl;
       cout<<"D - Dollar"<<endl;
       cout<<"A fried TWINKIE costs $3.50. You have inserted $"<<fixed <<setprecision(2)<<total<<endl;
       cout<<"Next coin: ";
       cin>>input;
      
       if(input == 'n')
           total = total + 0.05;
       else if(input=='d')
           total = total + 0.10;
       else if(input == 'q')
           total = total + 0.25;
       else if(input =='D')
           total = total + 1;
       cin.ignore();
       }
       cout<<"Enjoy your deep-fried TWINKIE. Your change is $"<<fixed <<setprecision(2)<<total<<endl;
       total = total - 3.50;
       return total;
   }
  
int main(){
  
   char c = 'y';
   float dollar = 0.0;
   cout<<"WELCOME TO TWINKIE VENDING MACHINE"<<endl;
   cout<<"TWINKIES are $3.50 each."<<endl;
   //cin.ignore();
   while(c=='y' || c == 'Y'){
       dollar = buyDeepFriedTwinkie(dollar);
       cout<<"Would you like to purchase another?: "<<endl;
       cin>>c;
       }
   }