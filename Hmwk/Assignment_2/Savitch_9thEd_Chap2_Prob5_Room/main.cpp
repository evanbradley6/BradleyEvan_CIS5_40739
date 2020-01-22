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

int main ()
{

int number;
int roomcapacity;
char choice ;


cout << "Input the maximum room capacity and the number of people" << endl;
cin >> roomcapacity;
cin >> number;


if(number <= roomcapacity)
cout << "Meeting can be held." << endl << "Increase number of people by " << (roomcapacity - number) << " will be allowed without violation.";
else if (number > roomcapacity)
{
cout <<"Meeting cannot be held." << endl << "Reduce number of people by " << (number - roomcapacity) << " to avoid fire violation."; 
}


return 0;
} 