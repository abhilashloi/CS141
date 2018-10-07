//sum of positive integers using recursion
#include<iostream>
using namespace std;
// declaring the function
int add(int n);
//using the function
int add(int n)
{
    if(n != 0)
    {
        return n + add(n - 1);
    }
    return 0;
}
//using the main function
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}