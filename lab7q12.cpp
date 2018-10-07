//Write a C++ program to find LCM of two numbers using recursion
#include <iostream>
using namespace std;
//declaring the function

int lcm(int a, int b)
{
    int mul = 0;
    mul += b;
    if((mul % a == 0) && (mul % b == 0))
    {
        return mul;
    }
    else 
    {
        return a*b;
    }
}
//using main function
int main()
{
   int a, b;

   cout << "Enter two positive integers: ";
   cin >> a;
   cin >> b;

   cout << "L.C.M of " << a << " & " <<  b << " is: " << lcm(a, b);

   return 0;
}