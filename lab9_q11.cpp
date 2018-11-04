//Write a program to declare variables of all predefined sizes 
//and declare corresponding pointers (of all predefined types). 
//Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
#include<iostream>
using namespace std;

int main()
{
    //declare variables of int
    int x;
    int *p;
    //declare variables of char
    char y;
    char *q;
    //declare variables of bool
    bool z;
    bool *r;
    //declare variables of float
    float a;
    float *s;
    //declare variables of double
    double b;
    double *t;
    //Print out the sizes of each of variables and pointer variables.
    cout<<"size of int:"<<sizeof(x)<<" "<<"and its pointer is"<<sizeof(p)<<endl;
    cout<<"size of char:"<<sizeof(y)<<" "<<"and its pointer is"<<sizeof(q)<<endl;
    cout<<"size of bool:"<<sizeof(z)<<" "<<"and its pointer is"<<sizeof(r)<<endl;
    cout<<"size of float:"<<sizeof(a)<<" "<<"and its pointer is"<<sizeof(s)<<endl;
    cout<<"size of double:"<<sizeof(b)<<" "<<"and its pointer is"<<sizeof(t)<<endl;
}