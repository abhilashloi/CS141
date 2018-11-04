// Implement your versions for the following function: 
//Strcpy  

#include <iostream>
using namespace std;

char* strcopy(char* str2,char* str)
{
	if (str==NULL)
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}

int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    //Implementation of strcpy function
    char str2[20];
    cout<<"Output of str2:"<<strcopy(str2,str)<<endl;
    return 0;
}