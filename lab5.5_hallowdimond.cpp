//write a c++ program to get a star pattern of hallow dimond square
#include<iostream>
using namespace std;
int main(){
    int n,i,j; //Declaring the variables
    //Ask the user for the number of stars should be present in each side
    cout<<"Enter the number of stars in each sides of the square="<<endl;
    cin>>n;
    for(int i = 0;i < n; i++){
       for (int j=0;j<(n-i);j++){
       cout<<"*";
       }
       for (int j= 0;j<(2*i);j++)
       {
       cout<<" ";
       }
       for (int j=0;j<(n-i);j++)
       {
       cout<<"*";
       }
       cout<<endl;
   }
   for(int i=0;i<n;i++)
   { 
      for (int j =0;j<i+1;j++)
      {
      cout<<"*";
      }
      for ( int j =2*i;j<2*n-2;j++)
      {
      cout<<" ";
      }
      for (int j = 0; j<i+1;j++)
      {
      cout<<"*";
      }
      cout<<endl;
  }
  return 0;
}




 
