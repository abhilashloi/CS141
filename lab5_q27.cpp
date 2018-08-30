//Write a c++ program to find the sum of all natural numbers between 1 to n
#include<iostream>
using namespace std;
int main(){
           int a;//Declaring the variables 
           //Ask the user for a number
           cout<<"Enter a number"<<endl;
           cin>>a;
           //Assigning the values to it
           int i=1,z=0;
           //using while loop for the problem
           while(i<=a)
           {
             z=z+i;
             i++;
           }
           cout<<z<<endl;
  return 0;
}
