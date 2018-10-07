//Write a C++ program to find GCD (HCF) of two numbers using recursion
#include <iostream>
using namespace std;
//declaring the function
int hcf(int a, int b);
// initialization
int hcf(int a, int b)
{
    if (b != 0)
    {
       return hcf(b, a % b);
    }
    else 
    {
       return a;
    }
}
//using main function
int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1;
   cin >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

   return 0;
}