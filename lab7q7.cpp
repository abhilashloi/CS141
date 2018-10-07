//checking the number to be pallindrome or not.
#include <iostream>
#include <math.h>
using namespace std;
 // Function declarations

int rev(int num)
{
    // Finding number of digits in num
    int digit = (int)log10(num);
 
 
    if(num == 0)
    {
        return 0;
    }
    return ((num%10 * pow(10, digit)) + rev(num/10));
}
 
 
int palindrome(int num)
{
   
    if(num == rev(num))
    {
        return 1;
    }
 
    return 0;
}
 
 

int main()
{
    int num;
 
    // Inputting any number from user
    cout<<"Enter any number: ";
    cin>>num;
 
    if(palindrome(num) == 1)
    {
        cout<<num<<" is palindrome number";
    }
    else
    {
        cout<<num<<" is NOT palindrome number";
    }
 
    return 0;
}