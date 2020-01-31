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
double Hat_size(double weight_H, double height_H);
//The formal parameter named weight_H is the weight of the user
//The formal parameter named height_H is the height of the user
double jacket_size(double weight_J, double height_J, double age_J);
//The formal parameter named weight_J is the weight of the user
//The formal parameter named height_J is the height of the user
//The formal parameter named age_J is the user`s age
// fixed used two variable argument
double waist_inches(double weight_W, double age_J);
//The formal parameter named weight_W is the weight of the user
int main(void)
{
       double weight, height;
      
       //fixed
       // convert age int data type to double data type
       // to program run smothly wit all double data type
       double age;
       double size_of_hat;
       double size_of_jacket;
       // declare the variable for waist also.
       double size_of_waist;
       // fixed
       // declare ans is equal to 'Y'
       char ans ='Y';
       // fixed
       // no need of do while loop
       // use only while loop
       while (ans=='y'||ans=='Y')
       {
              // prmopt the cloths size dimensions from user
              cout << "Enter your height(inches), weight(pound), and age :" << endl;
              cin >> height >> weight >> age;
              size_of_hat = Hat_size(weight, height);
              cout << "Your hat size is " << size_of_hat << " inches" << endl;
              size_of_jacket = jacket_size(weight, height, age);
              cout << "Your Jacket size is " << size_of_jacket << " inches" << endl;
              //fix
              size_of_waist = waist_inches(weight, age);
              cout << "Your waist size is " << size_of_waist << " inches" << endl;
              cout << "do you want to continue(y/n):";
              cin >> ans;
       }
       // for pause the console
       system("pause"); // use only in visual studio
}
// define the Hat_size function to compute the
//Hat_size
double Hat_size(double weight_H, double height_H)
{
       //Hat size = weight in pounds divided by height
       //in inches and all that multiplies by 2.9
       return ((weight_H / height_H)*2.9);
}
//fixed code
// define the jacket_size function for compute the jacket size
double jacket_size(double weight_J, double height_J, double age_J)
{
       // Jacket size(chest in inches) = height times
       //weight divided by 288
       double size = (weight_J*height_J) / 288;
       // no adjustment for ages 30 throught 39
       // condition
       while (age_J > 39)
       {
              // size increment 1/8
              size = size + 0.125;
              //adjustment only takes place after a full 10 years
              age_J = age_J - 10;
       }
       // return the size
       return size;
}
// define the waist_inches function for compute the waist size
double waist_inches(double weight_J, double age_J)
{
       // declare a variable
       int i;
       // Waist in inches= weight divided by 5.7
       double size = weight_J / 5.7;
       // there is no adjustment for age 29, but 1/10
       //of an inch is added for age 30.)
       for (i = 30; i <= age_J; i += 2)
              // adjusted by adding 1/10
              size += (1 / 10);
       // return size of waist
       return size;
}