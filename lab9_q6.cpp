#include <iostream>
using namespace std;
int countEven(int* p,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(*(p+i)%2==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    int* p=&ar[0];
    cout<<"No. of even numbers:"<<countEven(p,size);
}