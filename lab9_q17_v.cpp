/* Implement your versions for the following functions: 
Strchr*/

#include <iostream>
using namespace std;


char* ckch(char* str,char c)
{
	char* p=str;
	if(str==NULL)
	return NULL;
	
	else
	{
		for(int i=0;*(p+i)!='\0';i++)
		{
			if(*(p+i)==c)
			{
				return p+i;
			}
		}
	}
}
int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
  //Implementation of strchr function
   cout<<"Use of strchr function"<<endl;
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
	char* p=str;
	if(ckch(p,c)==NULL)
	{
		cout<<"The character is absent in the string"<<endl;
	}
	else
	{
		while(ckch(p,c)!=NULL)
		{
			cout<<"Found at:"<<(ckch(p,c)-str+1)<<endl;
			p=ckch(p,c)+1;
		}
	}
    return 0;
}