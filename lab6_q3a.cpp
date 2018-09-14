//write a program with a function that takes two parameters then return the maximum one.call the funcn (call by value)
#include<iostream>
using namespace std;
	void askMax (int a, int b)
 	 	{    //Ask the user to enter two numbers
			 cout<< "enter the first number = "<<endl;
			 cin>>a;
	 		 cout<< "enter the second number = "<<endl;
	 		 cin>>b;
		 	//call the function	
		 		 if (a > b)
                                {
				 cout<< " first number is maximum is "<<a<<endl;
  				}
				else
                                {
				 cout<< " second number is maximum is "<<b<<endl;
  				}
 		}
//driver function
	int main ()
	 	{
//Number as arguement
//call by value
	 	  	int a,b;
	 	  	askMax(a,b);
//get the max
//Tell the maximum to user	 	  	return 0;
		}
 