#include<iostream>
using namespace std;

class Node
{
  public:
    // Data
    int data;
    // Pointer to the next Node
    Node *next;
    // Construct that makes the ptr to NULL
    Node()
    {
        next = NULL;
    }
};

class LL
{
  	public:
    // Head -> Node type ptr
    Node *head;
    Node *tail;

    // Construct
    LL()
    {
        head = NULL;
        tail = NULL;
    }
    // count function
    int countItems()
    {
        int i = 1;
        Node *current = head;
        //running till the last element and incrementing the counter for every element
        while (current->next != NULL)
        {
            i++;
            current = current->next;
        }//returning the count value of the last element
        return i;
    }
    // insert function
    void insert(int value)
    {
        // If 1st Node is added
        Node *temp = new Node;
        // Insert value in the node
        temp->data = value;
        temp->next=head;
        head=temp;
    }
// insert at function
    void insertAt(int pos, int value)
    {
        //put it in the position only if the position exists in the linked list;
        if (pos <= countItems() + 1)
        {
            //
            int i = 1;
            Node *current = head;
            current = head;
            while (i < pos - 1)
            {
                i++;
                current = current->next;
            }

            // Create a node
            Node *temp = new Node;
            temp->data = value;

            // Moving ptrs like magic ! if not head
            temp->next = current->next;
            current->next = temp;

            // Update the code for 1st position
        }
        else
        {
            cout << "there isn't such a position in the Linked list" << endl;
        }
    }

    // Deletion of last element
    void delet()
    {
       Node* current=new Node;
       Node* previous=new Node;
       current=head;
       while(current->next!=NULL)
       {
       	previous=current;
       	current=current->next;
	   }
	   tail=previous;
	   previous->next=NULL;
	   delete current; 
    }

    //Deletion of a particuar element
    int deletAt(int pos)
    {
        Node *current = head;
        for (int i = 1; i < pos - 1; i++)
        {
            current = current->next;
        }
        int delVal=0;
        Node* temp = head;
            delVal=temp->data;//the value at the topmost node is stored
            head=temp->next;//top is moved to the next element in the stack
            temp->next=NULL;//the first element is removed from the stack
            delete temp;//and deleted
            return delVal;//
    }
    // Display
    void display()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }
};

class queuell
{
	public:
    Node * front;
    LL l1;
    queuell()
    {
        front=NULL;
    }
    void enqueue(int value)
    {
        l1.insert(value);
        front=l1.head;
    }
    void dequeue()
    {
		l1.delet();
        front=l1.head;
    }
    bool isEmpty()
    {
        if(front==NULL)return true;
        return false;
    }
    int size(){
        return l1.countItems();
    }
    
    void display()
    {
    	l1.display();
	}	
};

int main()
{
    cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"----------------------Queue using linked list--------------------------"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    
    queuell q1;
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
            
            case 0 :break;
            default:cout<<"Enter a valid integer."<<endl;
        }
    }while(choice!=0);
    return 0;
}

