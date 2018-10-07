/******************************************************************************
 Write a C++ program to find power of any number using recursion.
*******************************************************************************/

#include <iostream>
using namespace std;
//Define Power Fuction
float power(float x,float y,float z)
{
    //Put condition to find different values for different exponent
    if(z>0)
    {
        //Put condition to end the recursion
        if(y>z)
        {
        return 1;
        }
        else
        {
            //return power by recursion
            return x*power(x,y+1,z);
        }
    }
    else if(z==0)
    {
        return 1;
    }
    else
    {
        //Put condition to end the recursion
        if(y>(-z))
        {
        return 1;
        }
        else
        {
            //return power by recursion
            return power(x,y+1,z)/x;
        }
    }
}
//Main Function
int main()
{
    float n,z;//Declare variable for input
    //Take the number as input
    cout<<"Enter base:"<<endl;
    cin>>n;
    cout<<"Enter exponent:"<<endl;
    cin>>z;
    //Print the power
    cout<<"Power of base "<<n<<" with exponent "<<z<<"="<<power(n,1,z);
    return 0;
}