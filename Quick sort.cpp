//quick sort
#include <iostream>
using namespace std;
 // function for quick sort and partition
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[25],n,i;//size upto 25
    cout<<"number of elements="<<endl;
    cin>>n;
    cout<<"array elements are:"<<endl;
    //using for loop to enter the elements
    for(i=0;i<n;i++)
        cin>>a[i];
    //sorting it out
    quick_sort(a,0,n-1);
    cout<<"Array after sorting:";
    //using loop for dishplay
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
void quick_sort(int a[],int l,int u)//(arr,low,high)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);//quick sort of partition left of pivot
        quick_sort(a,j+1,u);//quick sort of partition right of pivot
    }
}
 
int partition(int a[],int l,int u)
{
    int pivot,i,j,temp;
    pivot=a[l];//pivot as the 1st element
    i=l;
    j=u+1;
    
    do
    {
        do{
        	i++;
		}while(a[i]<pivot && i<=u);//partition 1
            
        do{
        	j--;
		}while(pivot<a[j]);//partition 2
            
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=pivot;
    
    return(j);//returns the index
}
