//wwrite a c++ program to enter lengthin centimeter and cover it into meter and kilometer.
#include<iostream>
using namespace std;
int main(){
int a;//Declare the  variables
cout<<"write the program for convertion of length in centimeter to meter and kilometer?";
//Ask for the length in centimeter
cout<<"enter the length in centimeter";
cin>>a;//Assign the formula to get the length in meter and kilometer
  float b= a/100.00;
  float c= b/1000.00;
cout << "Show the length in meter"<<  b <<endl; // Length in meter
cout << "show the length in kilometer" << c << endl;// Length in kilometer
return 0;
}




