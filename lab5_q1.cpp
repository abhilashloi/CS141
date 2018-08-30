//Write a c++ program to find maximum between two numbers
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    float a,b;//Declaring the variables
    cout<<"Write the program for the determination of maximum between two number.";
    //Ask the user for the first number
    cout<<"Enter the first number"<<endl;
    cin>>a;
    //Ask the user for the second number
    cout<< "Enter the second number"<< endl;
    cin>>b;
    if (b>a){
       cout <<"second number is greater than first one" << endl;
       }
    else {
    cout<< "first one is greater than secon one"<< endl;
    }
    return 0;
} 
