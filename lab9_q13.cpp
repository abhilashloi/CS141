// Create an array of size 10.
//Use a loop to print array using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;

int main()
{
   int ar[10]={1,2,3,4,5,6,7,8,9,0};
   //Use a loop to print array using the normal index method
   cout<<"using the normal index method"<<endl;
    for (int i=0;i<10;i++)
	{
		cout<<ar[i]<<" ";
	}   
	cout<<endl;
    //Use a loop to print array using the pointer method
    int *x = ar;
    cout<<"using the pointer method"<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<*x<<" ";
        x++;
    }
   return 0;
}
