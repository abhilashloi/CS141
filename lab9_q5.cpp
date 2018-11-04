#include <iostream>
using namespace std;
int main()
{
   char c[10] ="abcde";
   char* cptr;
   cptr=c;
   for(int i=10;i>=0;i--)
   {
       cout<<*(cptr+i);
   }
   return 0;
}