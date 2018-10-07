// sum of digits of a given number using recursion
#include <iostream>
using namespace std;
//calling the function by recursion
int sumdigit(int num) 
{
    if (num <= 0) 
    {
      return 0;
    } 
    else
    {
    return ( num % 10) + sumdigit( num / 10);
    }
}
//using main function
int main() 
{
   int n, result;
 
   cout << "Enter a number ";
   cin >> n;
 
   result = sumdigit(n);
 
   cout << "Sum of digits of a number is " << result;
 
   return 0;
}