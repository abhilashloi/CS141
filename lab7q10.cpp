//fibonacci series using recursion
#include<iostream>
using namespace std;
// declaring the function
int fibonacci(int n)
{
   if ( n == 0 )
    {
      return 0;
    }
   else if ( n == 1 )
    {
       return 1;
    }
   else
    {
      return ( fibonacci(n-1) + fibonacci(n-2) );
    }
   return 0;
} 
//using the main function
int main()
{
    int n,i=0;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"Fibonacci Series";
 //using while loop
    while(i<n)
        {
            cout<<" "<<fibonacci(i);
            i++;
        }
 
    return 0;
}