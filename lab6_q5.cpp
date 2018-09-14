//write a program with a function that takes two parameters then return the minimum or maximum or sum on user command.call the funcn (call by reference)
#include<iostream>
using namespace std;
// ask user to enter two numbers
//number as arguement
// enter the numbers
 int ask (int& a, int& b)
 	 	{
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
	 		 
 		}
// call the function sum
void sum (int& a, int& b)
 	 	{
			 
	 		 int sum = a+b;
	 		 cout<< "sum = "<< sum <<endl;
 		}
// call the function max 
void Max (int& a, int& b)
 	 	{
			 
	 		  if (a > b)
                                {
				 cout<< " first number is maximum is "<<a<<endl;
  				}
				else
                                {
				 cout<< " second number is maximum is "<<b<<endl;
  				}
 		}
// call the function min
void Min (int& a, int& b)
 	 	{
			 
	 		  if (a < b)
                                {
				 cout<< " first number is minimum is "<<a<<endl;
  				}
				else
                                {
				 cout<< " second number is minimum is "<<b<<endl;
  				}
 		}
//driver function
	int main ()
	 	{
//call by reference
	 	  	int a,b,choice;
			ask (a,b);
			cout<< " what operation do u want to do with the numbers? "<<endl;
			cout<< " options "<<endl;
			cout<< " 1. sum "<<endl;
			cout<< " 2. Max "<<endl;
			cout<< " 3. Min "<<endl;
                        cin>> choice;
                          
			if(choice==1) 
			{
			 
	                 sum(a,b);
			}
			else if(choice==2) 
			{
			 
	                 Max(a,b);
			}
			else
			{
			
		        Min(a,b);
			}
return 0;
}
 

