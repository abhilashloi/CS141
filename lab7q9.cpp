// Factorial of n using recursion in it.
#include <iostream>
using namespace std;
//declaring the function
int factorial(int);
//.using recursion
int factorial(int n) 
{
    // for the numbers greater than 1 because factorial only exist for the positive integers
    if (n > 1) 
    {
        return n*factorial(n-1);
    }
    // for 0 and 1
    else 
    {
        return 1;
    }
}
//using the main function
int main() 
{
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    if (n < 0)
    {
        cout << "invalid input";
    }
    else
    {
        cout << "Factorial of " << n <<" = " << factorial(n);
    }
    
    return 0;
}

