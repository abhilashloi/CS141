//Write the program with a function that takes two int parameters,adds them together,and return the sum.
//Include the library
#include<iostream>
using namespace std;
//Ask the user for two numbers
void askSum(int a,int b){
     cout<<"Enter the first number="<<endl;
     cin>>a;
     cout<<"Enter the second number="<<endl;
     cin>>b;
     int sum=a+b;
     cout<<"sum="<<sum<<endl;
}
//Driver function
int main(){
//Call by the value
int a,b;
//Get the output
askSum(a,b);
return 0;
}



