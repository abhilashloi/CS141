//Write the program with a function that tke two int parameters,adds them together then shows minimum value
//Include library
#include<iostream>
using namespace std;
//Ask for two nmbers
int askMin(int a,int b)
{
   cin>>a;
   cin>>b;  
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
   askMin(a,b);
   return 0;
}
