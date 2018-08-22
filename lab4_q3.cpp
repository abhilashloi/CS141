//Write a c++ program to enter temperature in Fahrenheit and convert it into Celsius.
#include<iostream>
using namespace std;
int main(){
int a;//Declaring the variables
cout << "Write the program  for coversion of temperature in Fahrenheit into celsius scale";
//Ask for the temprature in Fahrenheit
cout<<"Enter the temperature in Fahrenheit";
cin>>a;
//Assign the formula for the convertion of the temperature from celsius scale to Fahrenheit
  float b = (a-32)/1.8;
cout << "Show the temperature in celsius" << b << endl;
return 0;
}
