//stack using array
#include<iostream>
using namespace std;
// using class named as stackarr
class stackarr
{
	int stack[10];//declaration of array(maxsize = 10)
	int top;//stores index of the top of array

	public: 
		stackarr()//default constructor
		{
			top = -1;//intialize top to -1
		}
	//function to push the element to the array
	void push(int value)
	{
		if(top>(9))//array is out of bounds
		{
			cout<<"stack over flow"<<endl;
		}
		stack[++top]=value;//else array is not out of bounds
		cout<<"inserted"<<value<<endl;
	}
	//function to pop an element from array
	void pop()
	{
		if(top<0)//stack underflow
		{
			cout<<"stack under flow"<<endl;
		}
		else   //when stack is not empty
		{
		cout<<"deleted"<<stack[top--]<<endl;
		}
	}
	// function to display elements of the stack
	void display()
	{
		if(top<0)  //if stack is empty
		{
			cout<<"stack empty";
		}
		for(int i=top;i>=0;i--) //else elements printed
		cout<<stack[i]<<"->";
		cout<<endl;
	}
	// function to display the top element
	int topValue()
	{
		return stack[top];
	}
	// function to check whether the the stack is full or empty
	bool isEmpty()
    {
        if(top < 0)return true;//if empty
        return false;//otherwise say false
    }
    //function to countb the number of elements in the stack
    int size(){
        int count = 0;
        for(int i=top;i>-1;i--)//loop to count
        count++;
        return count;
    }
    
};

int main()
{
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"----------------------------stack using array--------------------------"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    
    stackarr s1;
    int choice=0;
    int val=0;
    cout<<"Enter 1 to push an element into the stack."<<endl;
    cout<<"Enter 2 to pop an element from the stack."<<endl;
    cout<<"Enter 3 to show the size of the stack."<<endl;
    cout<<"Enter 4 to display the elements of the stack."<<endl;
    cout<<"Enter 0 to exit."<<endl;
    do
    {
    	cout<<"-------------------------------------"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        cout<<"-------------------------------------"<<endl;
        switch(choice)
        {
            case 1 :cout<<"Enter the value to be pushed into the stack."<<endl;
                    cin>>val;
                    s1.push(val);
                    break;
            case 2 :s1.pop();
                    break;
            case 3 :val=s1.size();
                    cout<<"The number of elements in the stack is "<<val<<endl;
                    break;
            case 4 :s1.display();
                    break;
            case 5 :val=s1.topValue();
                    cout<<val<<" is the value at the top of the stack."<<endl;
                    break;
            case 0 :break;
            default:cout<<"Enter a valid integer."<<endl;
        }
    }while(choice!=0);
    return 0;
}


