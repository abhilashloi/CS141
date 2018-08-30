#include<iostream>
//Write a c++ program to find maximum between three numbers
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    float a,b,c; // Declaring the variables
    cout<<"Write the program for the determination of maximum among three numbers."<< endl;
    //Ask the user for the first number
    cout<<"Enter the first number"<< endl;
    cin>>a;
    //Ask the user for the second number
    cout<<"Enter the second number"<<endl;
    cin>>b;
    //Ask the user for the third number
    cout<< "Enter the third number"<<endl;
    cin>>c;
    if(a>b){
               if (a>c)
                  {
                        cout<<"First number is the greatest"<<endl;
                  }
               else{
                        cout<<"Third number is the greatest"<<endl;
                   }
                 }
            else{
                   if (b>c){
                              cout<<"Second number is the greatest"<<endl;
                           }
                   else{
                              cout<<"Third number is the greatest"<<endl;
                       }
                }
    return 0;
}
