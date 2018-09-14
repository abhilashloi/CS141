//Write the program with a function that tke two int parameters,adds them together then shows minimum value(by reference)
//Include library
#include<iostream>
using namespace std;
//Ask for two nmbers
int ask(int& a,int& b)
{
   cin>>a;
   cin>>b;  
}
//show the minimum one
void min(int& a,int& b)
{
   if(a<b)
   {
   cout<<"Enter first number is minimum"<<endl;
   }
   else
   {
   cout<<"Enter second number is minimum"<<endl;
   }
}
//driver function
int main()
{
   int a,b;
   cout<<"Enter the first number"<<endl;
   cout<<"Enter the second number"<<endl;
   //call by value
   ask(a,b);
   min(a,b);
   return 0;
}
