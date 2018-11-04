// Implement your versions for the following function: 
//Strcat 

#include <iostream>
using namespace std;


char* strcate(char* str,char* str3)
{
	int size1=0;//size2=0;
	char* z=str;
	while(*z!='\0')
	{
		size1++;
		z++;
	}
	char* p=str+size1;
	while(*str3!='\0')
	{
		*p++=*str3++;
	}
	*p='\0';
	return str;
}

int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    //Implementation of strcat function
	char str3[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str3,20);
    cout<<"Output after strcat function:"<<strcate(str,str3)<<endl;
    return 0;
}