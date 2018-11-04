#include <iostream>
using namespace std;
double* maximum(double* a, int size)
{
    if(size!=0)
    {
        int x;
        //sort array in descending order
	    for(int i=0;i<size;i++)
	    {
		    for(int j=i+1;j<size;j++)
		    {
			    if(*(a+i)<*(a+j))
			    {
				    x=*(a+i);
				    *(a+i)=*(a+j);
				    *(a+j)=x;
			    }
		    }
	    }
	    return a;
    }
    else
    {
        return NULL;
    }
}
int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    
    if(size!=0)
    {
        double ar[size];
        cout<<"Enter input to array"<<endl;
            for(int i=0;i<size;i++)
            {
            cin>>ar[i];
            }
        double* p=&ar[0];
        cout<<"Max:"<<*maximum(p,size);
    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max="<<NULL;
    }
    return 0;
}