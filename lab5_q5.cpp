//Write a c++ program to check whether the number is even or odd
#include<iostream>
#include<cstring>
using namespace std;
int main(){
   int a,b;//Declaring the variables
   //Ask the user for the number
   cout<<"Enter the number"<<endl;
   cin>>a;
   //Assigning the formula to determine whether the number is even or odd
   b=a%2;
   if(b==0){
      cout<<"The entered number is even."<<endl;
           }
      else{
      cout<<"The entered number is odd."<<endl;
       }
   return 0;
}


 
