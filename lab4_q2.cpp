//Write a c++ program to enter temperature in Celsius and convert it into Fahrenheit.
#include<iostream>
using namespace std;
int main(){
int a;//Declaring the variables
cout << "Write the program  for coversion of temperature in celsius scale into Fahrenheit";
//Ask for the temprature in celsius scale
cout<<"Enter the temperature in celsius scale";
cin>>a;
//Assign the formula for the convertion of the temperature from celsius scale to Fahrenheit
  float b = 1.8*a + 32;
cout << "Show the temperature in fahrenheit" << b << endl;
return 0;
}




