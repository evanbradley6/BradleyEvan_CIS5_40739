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
int main() 
 
 { 
double oldSalary, retroSalary, newSalary, increaseSalary, newMonthlySalary; 
const double payIncrease = .076; 
  
cout << "Input previous annual salary." << endl; 
cin >> oldSalary; 
 
 newSalary = (oldSalary * .076) + oldSalary; 
increaseSalary = newSalary - oldSalary; 
newMonthlySalary = newSalary / 12; 
retroSalary = (oldSalary / 2) * payIncrease; 
 
cout << setprecision(2) << fixed << setw(7); 
cout << "Retroactive Pay    = $  " << retroSalary << endl;
cout << "New annual salary  = $" << newSalary << endl;
cout << "New monthly salary = $ " << newMonthlySalary;

 return 0; 
} 