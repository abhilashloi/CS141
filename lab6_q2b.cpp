//Write the program with a function that takes two int parameters,adds them together,and return the sum(by reference)
//Include library
#include<iostream>
using namespace std;
//Ask the user for two numberv
void ask(int& a,int& b){
     cout<<"Enter the first number="<<endl;
     cin>>a;
     cout<<"Enter the second number="<<endl;
     cin>>b;
}
void sum(int& a,int& b){
     int sum=a+b;
     cout<<"sum="<<sum<<endl;
     }
//driver the function 
int main(){
     int a,b;
     //call by reference
     ask(a,b);
     sum(a,b);
     return 0;
}
