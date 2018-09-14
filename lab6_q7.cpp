//UpperCase and LowerCase 
#include<iostream>
using namespace std;
//Write a function to Upper() that returns the uppercase of the inputChar received. Use call-by-value
void toUpper(char a)
 	 	{
           //Ask the user to enter the characters
           cout<<"Enter a character in lowercase: "; 
           cin>>a;
          //call the functions
           a=a-32;
           cout<<"Entered character in uppercase: "<<a<<endl;
 		}
 		
void toLower(char a)
 	 	{
           
           cout<<"Enter a character in uppercase: "; 
           cin>>a;
           a=a+32;
           cout<<"Entered character in lowercase: "<<a<<endl;
 		} 
//driver function
	    int main ()
	 	{
//call by value
	 	  	int a;
	 	  	toLower(a);
	 	  	toUpper(a);
//tell the result	 	  	
//get the sum
	 	  	return 0;
		} 		
 		