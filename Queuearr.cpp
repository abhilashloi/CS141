#include<iostream>
using namespace std;

class queuearr
{
	int queue[10];
	int front;
	int rear;
	int length;
	public:
		queuearr()
		{
			front = -1;
			rear = -1;
			length = 10;
		}
	//function to enqueue in queue	
	void enqueue(int value)
	{
		if(rear==-1)//if the queue is empty
		{ 
			front++;//front is incermented
			queue[++rear]=value;//and rear is incermented and the value is stored
		}
		else if(rear==length-1)//if array index is out of bounds
		{
			cout<<"queue overflows"<<endl;//queue overflows
		}
		else
		{
			queue[++rear]=value;//element added at rear 
		}
	}
	//function to dequeue from queue
	void dequeue()
	{
		int value;
		if (front == -1)
		{
			cout<<"queue is empty"<<endl;
			
		}
		else 
		{
			value = queue[front];
			if (front >= rear)
			{
				front = -1;
				rear = -1;
			}
			else 
			{
				front++;
			}
			cout<<"deleted "<<value<<endl;
		}
	}
	//display the queue
	void display()
	{
		/* Function to display elements of Queue */
        int i;
        if(front==-1) {
            cout << "Empty Queue" << endl;
        }
        else
        {
            for(i=front; i<=rear; i++)
                cout << queue[i] << "->";
                cout<<endl;
        }
	}
	// function to display topqueue
	int frontValue()//function to return the value at the rear of the queue
	{
		return queue[front];//value returned
	}
	// function to check whether the queue is empty or not
	bool isEmpty()
    {
        if(front == -1)return true;
        return false;
    }
    //function to count the number of elements in the queue
    int size(){
        int count=0;
		for(int i=front;i<=rear;i++)//for loop to
		count++;//count the number of elements in the queue
		return count;
    }	
};

int main()
{
    cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"----------------------------queue using array--------------------------"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    
    queuearr q1;
    int choice=0;
    int val=0;
    cout<<"Enter 1 to enqueue an element into the queue."<<endl;
    cout<<"Enter 2 to dequeue an element from the queue."<<endl;
    cout<<"Enter 3 to show the size of the queue."<<endl;
    cout<<"Enter 4 to display the elements of the queue."<<endl;
    cout<<"Enter 0 to exit."<<endl;
    do
    {
    	cout<<"-------------------------------------"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        cout<<"-------------------------------------"<<endl;
        switch(choice)
        {
            case 1 :cout<<"Enter the value to be enqueue into the queue."<<endl;
                    cin>>val;
                    q1.enqueue(val);
                    break;
            case 2 :q1.dequeue();
                    break;
            case 3 :val=q1.size();
                    cout<<"The number of elements in the queue is "<<val<<endl;
                    break;
            case 4 :q1.display();
                    break;
            case 5 :val=q1.frontValue();
                    cout<<val<<" is the value at the front of the queue."<<endl;
                    break;
            case 0 :break;
            default:cout<<"Enter a valid integer."<<endl;
        }
    }while(choice!=0);
    return 0;
}
