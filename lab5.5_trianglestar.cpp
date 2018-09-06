//write a c++ program to get a star pattern of right triangle
#include<iostream>
using namespace std;
int main(){
    int n,i,j; //Declaring the variables
    //Ask the user for the number of stars should be present on the base
    cout<<"Enter the number of stars in the base="<<endl;
    cin>>n;
    for(int i = 0;i < n; i++){
       for (int j =0;j<=i;j++)
       {
        cout<<"*";
       }
       cout<<endl;
     }
     return 0;
}




