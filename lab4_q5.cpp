//Write a c++ program to enter two angles of the triangle and find the third angle.
#include<iostream>
using namespace std;
int main(){ 
int a,b;//Declaring the variables
cout<<"Write the program for the calculation of an angle of the triangle if the value of other two angle are given";
//Ask for the value of two angles of the triangle
cout<<"Enter the value of the angles"<<endl;
cout<<"First angle=";
cin>>a;
cout<<"second angle=";
cin>>b;
//Assigning the formula for the calculation the  third angle
 float c=180-(a+b);
cout<<"Show the value of the third angle of the triangle"<<c<<endl;
return 0;
}



