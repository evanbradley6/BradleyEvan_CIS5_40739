/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include<iostream>
using namespace std; 
int main(void) { 
int count=0; 
int num; 
int positive=0; 
int negative=0; 
int sum=0;
cout<<"Input 10 numbers, any order, positive or negative"<<endl; 
do { 
cin>>num; 
if(num<0) 
  negative+=num;
if(num>0)
  positive+=num;
sum+=num;
count++;
} while (count<10);
cout<<"Negative sum = "<< negative << endl; 
cout<<"Positive sum =  "<< positive << endl; 
cout<<"Total sum    =   " << sum; 
return 0;
}