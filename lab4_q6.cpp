//Wrie a c++ program to enter base and height of the triangle and find its area.
#include<iostream>
using namespace std;
int main(){
int b,h;//Declaring the variables
cout << "write the programe for the calculation of area of a triangle if the value of base and height is given";
//Ask for the base of the triangle
cout<<"Enter the value of base of the triangle";
cin>>b;
//Ask for the height of the triangle
cout<<"Enter the value of height of the trangle";
cin>>h;
//Assigning the formula for the calculation of the area of the triangle from its base and height
  float A=0.5*b*h;
cout << "show the value of area of ther triangle"<<A<<endl;
return 0;
}



