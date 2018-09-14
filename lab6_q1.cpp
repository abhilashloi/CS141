//Tax Rate Calculation using Functions 
#include<iostream>
using namespace std;
// ask user to enter the values
// call the functions
// number as arguement 
// tell the  tax value to user
//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. 
int ask (int& a, int& b,int& c)
 	 	{
			 //Ask the user to enter the values
			 //call the functions
			 cout<< "enter the units = "<<endl;
			 cin>>a;
	 		 cout<< "enter the unitCst = "<<endl;
	 		 cin>>b;
	 		 cout<< "enter the taxRt = "<<endl;
			 cin>>c;
 	 	}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 	 
 	 	void sat (int& a, int& b,int& c)
 	 	{
	 		 int sat = a*b*c;
	 		 cout<< "salesTx = "<< sat <<endl;
 	 	}
 	 	void tot (int& a, int& b,int& c)
 	 	{
	 		 int tot = (a*b*c) + (a*b);
	 		 cout<< "totDue = "<< tot <<endl;
 	 	}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
	 	int read (int& a, int& b,int& c)
	 	 { 
	 	    cout<< "The unit cost over the object is " <<b<< ". "<<"The number of units are "<<a<<". "<<"The tax rate is "<<c<<". "<<"the sales tax is "<<(a*b*c)<<". "<<"The total is "<<(a*b*c) + (a*b)<<endl; 
	 	 }
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
//driver function
	    int main ()
	 	{
//number as arguement
//call by reference
	 	  	int a,b,c;
			ask(a,b,c);
	 	  	sat(a,b,c);
	 	  	tot(a,b,c);
	 	  	read(a,b,c);
//get the values
//tell the tax values to the user
	 	  	return 0;
		}
 		