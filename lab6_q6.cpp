//Write the program with a function that takes two int parameters and print sum of all even number between them,sum of all odd numbers between themand their squares sum also
//Include library
#include<iostream>
using namespace std;
//Ask For two numbers
int ask(int a,int b)
{
	cout<<"Enter 1st number:"<<endl;
	cout<<"Enter 2nd number:"<<endl;
}
int sumEvenNumbers(int firstNum,int secondNum, int sumEven)
{
	
	//Declare a variable named sum which has initial value zero
	sumEven=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"SumEven:"<<sumEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNum)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"SumEven:"<<sumEven<<endl;
	}
}
int sumOddNumbers(int firstNum,int secondNum,int sumOdd)
{
	
	//Declare a variable named sum which has initial value zero
	sumOdd=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"SumOdd:"<<sumOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNum)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"SumOdd:"<<sumOdd<<endl;
	}
}

int sumSquareEvenNumbers(int firstNum,int secondNum, int sumSquareEven)
{
	
	//Declare a variable named sum which has initial value zero
	sumSquareEven=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumSquareEven=sumSquareEven+(z*z);
			z=z+2;
		}
		cout<<"SumSquareEven:"<<sumSquareEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNum)
		{
			sumSquareEven=sumSquareEven+(z*z);
			z=z+2;
		}
		cout<<"SumSquareEven:"<<sumSquareEven<<endl;
	}
}

int sumSquareOddNumbers(int firstNum,int secondNum,int sumSquareOdd)
{
	
	//Declare a variable named sum which has initial value zero
	sumSquareOdd=0;
	int z=firstNum;
	//Put condition to check whether number is even or odd
	if(firstNum%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNum)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"SumSquareOdd:"<<sumSquareOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNum)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"SumSquareOdd:"<<sumSquareOdd<<endl;
	}
}

//Driver function
int main()
{
	int a,b,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	ask(a,b);
	cin>>a;
	cin>>b;
	//Call by value
	sumEvenNumbers(a,b,sumEven);
	sumOddNumbers(a,b,sumOdd);
	sumSquareEvenNumbers(a,b,sumSquareEven);
	sumSquareOddNumbers(a,b,sumSquareOdd);
	return 0;
}