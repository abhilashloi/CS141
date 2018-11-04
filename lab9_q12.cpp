//Write a program to declare two variables a,b and a pointer variable p (all integer type). 
//Try to understand pointers while doing this. 
//Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
//Assign values a=2 and b = 3. Print the values of a, b and *p. 
//Now point p to b. Print the values of a, b and *p.

#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int *p;
    //Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
    p=&a;
    b=*p;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
    //Assign values a=2 and b = 3. Print the values of a, b and *p. 
    a=2;
    b=3;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
    //Now point p to b. Print the values of a, b and *p.
    p=&b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*p = "<<*p<<endl;
    
    cout <<endl;
}