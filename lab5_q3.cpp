//Write a c++ program to check whether a number is negative ,positive or zero
#include<iostream>
#include<cstring>
using namespace std;
int main(){
     float a;//Declaring the variables
     cout<<"Write the program to check whether the number is negative,positive or zero."<<endl;
     //Ask the user for the number
     cout<<"Enter the number"<<endl;
     cin>>a;
     //Determine the sign using some conditions  
       if(a>0)
         {
              cout<<"the number is positive"<<endl;
         }
       else{}
       if(a<0)
         {
             cout<<"The number is negative"<<endl;
         }
       else{}
       if(a==0)
         {
             cout<<"The number is zero"<<endl;
         }
     return 0;
}
