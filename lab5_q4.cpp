//Write a c++ program to check whether the number is divisible by 5 and 11 or not
#include<iostream>
#include<cstring>
using namespace std;
int main(){
     int a,b;//Declaring the variables
     //Ask the user for the number
     cout<<"Enter the number"<<endl;
     cin>>a;
     //Determine the variable whether divisible by 5 and 11 or not using certain formula
     b=a%55;
     if(b==0){
        cout<<"The entered number is divisible by 5 and 11"<<endl;
             }    
     else{
        cout<<"the entered number is not divisible by 5 and 11" << endl;
         }    
     return 0;
}





