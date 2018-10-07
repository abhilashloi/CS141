//print even or odd numbers using recursion.
#include <iostream>
using namespace std;
//  declaration
//Recursive function to print even or odd numbers in a given range.
 
void printevenodd(int cur, int limit)
{
    if(cur > limit)
    {
        return ;
    }
    else
    {
        cout<<cur<<endl;
        printevenodd(cur + 2, limit);
    }
}
//using main function
int main()
{
    int lower, upper;
    cout<<"Enter lower limit: ";
    cin>>lower;
    cout<<"Enter upper limit: ";
    cin>>upper;
    cout<<"if the lower limit input is odd then the numbers are odd otherwise even if input is even. "<<endl;
    cout<<"Even/odd Numbers from "<<lower <<" to "<<upper<<endl;
    printevenodd(lower, upper);
 
    return 1;
}