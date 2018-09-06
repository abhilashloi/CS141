//write a c++ program to get a pattern of hollow square 
#include<iostream>
using namespace std;
int main(){
    int n,i,j; //Declaring the variables
    //Ask the user for the number of stars should be present in each side
    cout<<"Enter the number of stars in each sides of the square="<<endl;
    cin>>n;
    for(int i = 0;i < n; i++){
      if (i==0||i==(n-1)){   
        for (int i = 0;i<n;i++){
     cout<<"*";
          }
          cout<<endl;
       }
       else 
       {
          for( int j=0;j <n;j++){
             if (j==0||j==(n-1))
                {
             cout<<"*";
                }
         
             else{
                   cout<<" ";
                 }
       }
    cout<<endl;
   }  
 }
   return 0;
}  
