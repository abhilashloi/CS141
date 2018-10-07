//reverse of any number using recursion
#include<iostream>
#include<math.h>
using namespace std;
// declaring the function
int rev(int num, int len)
{
    if (len == 1)
    {
        return num;
    }
    else
    {
        return (((num % 10) * pow(10, len - 1)) + rev(num / 10, --len));
    }
}
//using the main function
int main()
{
    int num, result;
    int len = 0, temp;
 
    cout<<"Enter an integer number to reverse: ";
    cin>>num;
    temp = num;
    while (temp != 0)
    {
        len++;
        temp = temp / 10;
    }
    result = rev(num, len);
    cout<<"the reverse of "<<num<<" is "<<result;
    return 0;
}