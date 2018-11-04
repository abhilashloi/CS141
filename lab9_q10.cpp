//Write a function revString(char*) which reverses the parameter cstring. 
//The function returns nothing.
//You may use C++ string handling functions in <cstring> in the function if you wish.
#include <iostream>
#include<cstring>
using namespace std;
//Defining a function to revese the parameter string
void revtString(char* p)
{
    int end;
    int count=0;
    for(int i=0;(*(p+i))!='\0';i++)
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)
    {
        cout<<*(p+i);
    }
}
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    char ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    
    char* p=&ar[0];
    revtString(p);
    return 0;
}
