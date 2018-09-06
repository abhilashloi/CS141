//Write a c++ program to get star pattern of inverted triangle
#include<iostream>
using namespace std;
int main(){
    int n,i,j; //Declaring the variables
    //Ask the user for the number of stars should be present on the base of the triangle 
    cout<<"Enter the number of stars on the base of the triangle="<<endl;
    cin>>n;
    for(int i = 0;i < n; i++){
       for (int j =0;j<(n-i);j++)
       {
        cout<<"*";
       }
    cout<<endl;
    }
   return 0;
 }
