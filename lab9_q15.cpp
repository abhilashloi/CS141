/* Write a program to show string repeatedly by shifting top character of string to right.  */

#include <iostream>
using namespace std;
int main()
{
    char ar[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>ar;
    p=&ar[0];
    //Loop to count the rows
    for(int i=0;i<=10;i++)
    {
        //Loop to print the values
        for(int j=i;j<=10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}