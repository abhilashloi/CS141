/* Implement your versions for the following function: 
Strcmp */

#include <iostream>
#include<cstring>
using namespace std;


int compare(char* a,char*b)
{
int result=0;
	for (int i = 0; ; i++)
	{
		if (*(a+i) != *(b+i))
		{
		    result= *(a+i)-*(b+i);
			break;
		}
	}
return result;

}
int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    
    //Implementation of strcmp function
    cout<<"Use of strcmp function"<<endl;
	char str4[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str4,20);
    int result=compare(str,str4);//Compares the lengthof two strings
    if(result==0)
    cout<<"Strings are same"<<endl;
    else if(result>0)
    cout<<"The ascii value of the character of str after 1st mismatch is more than that of str2 with ascii difference:"<<result<<endl;
    else
    cout<<"The ascii value of the character of str after 1st mismatch is less than that of str2 with ascii difference:"<<result<<endl;
    
    return 0;
}