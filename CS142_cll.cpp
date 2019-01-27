#include <iostream>
using namespace std;
 //creating class node
class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(int value){
        next = NULL;
        data = value;
    }
};
//created class CSLL
class LinkedList{
    public:
    Node * head, *tail;
    CSLL(){
        head = NULL;
        tail = NULL;
    }
    // Inserts to the end of the linked list.
    void insert(int value){
        
        // Create a new node
        Node * temp = new Node(value);
        // CHeck if empty list
        if(head == NULL){
            head = temp;
        }  
        else{ // If not empty list. 
            Node * current = head;
            while(current->next != head)
                current = current->next;
            current->next = temp;
        }
        temp->next = head;
        tail=temp;
        tail->next=head;
    }
    // Displays the linked list.
    void display(){
        Node * current = head;
        if(current == NULL) {
            cout << "No elements " << endl;
            return;
        }
        while(current->next != head){ // Stopping at head
            cout << current -> data << "->";
            current = current -> next;
        }
        // Printing the last element
        cout << current -> data ;
        cout << endl;
    }
    void InsertAt(int value, int pos){
        // To Do
        int count = 0;
	    Node* current = head;//pointer to go from the List
	    while(current->next != head)
	    {
			current = current->next;//pointer moves forward
	        count++;//incrementing
	    }
	    
	    count++;
	    
	    if(pos>0 && pos<=count)
	    {
	       if(pos==1)//pos responds to head
            {
                Node *current=head;
                Node *temp2=new Node(value);
                temp2->data=value;
                temp2->next=current;
                head=temp2;
                tail->next=head;
            }
            else
            {
                //Reach the place before pos
                Node *current=head;
                int i=1;
                while(i<pos-1)
                {
                   i++;
                   current=current->next;
                }
                //Create the node
                Node *temp2=new Node(value);
                temp2->data=value;
                temp2->next=current->next;
                current->next=temp2;
            }	
		}
		else
		{
            cout<<pos<<" is invalid position"<<endl;
        }
    }
    void deleteAt(int pos){
        // To Do
        int count=0;
    	Node *current;
    	current=head;
    	if(pos==1)//checking for head posn
    	{
          head=head->next;
          tail->next=head;
    	}
    	else          //checking for the rest
    	{
          //Reach the place before pos
                Node *current=head;
                int i=1;
                while(i<pos-1)
                {
                   i++;
                   current=current->next;
                }
                current->next=current->next->next;
    	}
    }
    // delete function
    void del(){
        // Deletes the last element.
        Node * current; 
		Node * temp;
        current = head;
        while(current ->next != head)// iterating till tail comes to head
        {
		    temp = current;
		    current = current -> next;
		}
		temp ->next = head;
		delete current;
    }
    
    int counting(){
        // Counts the Number of items.
        int count = 0;
	    Node* current = head;//pointer to go from the List
	    while(current->next != head)
	    {
			current = current->next;//pointer moves forward
	        count++;//incrementing
	    }
	    
	    return (count+1);
    }

};

int main()
{
   //Object of the class
    LinkedList l1;
    //Enter values
    for(int i=1;i<6;i++)
    {
        l1.insert(i);
    }
    //showing output
    cout<<"Normal Display::"<<endl;
    l1.display();
    cout<<"The number of items before deletion="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after deletion of last element::"<<endl;
    l1.del();//use of delete
    l1.display();
    cout<<"The number of items after deletion="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after insertion at particular position(valid ex-1)::"<<endl;
    l1.InsertAt(2,26);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after insertion at particular position(invalid ex-1)::"<<endl;
    l1.InsertAt(5,26);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-2)::"<<endl;
    l1.InsertAt(15,15);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(valid ex-2)::"<<endl;
    l1.InsertAt(5,15);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after deletion at particular position(valid ex-1)::"<<endl;
    l1.deleteAt(1);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-1)::"<<endl;
    l1.deleteAt(66);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-2)::"<<endl;
    l1.deleteAt(696);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after deletion at particular position(valid ex-2)::"<<endl;
    l1.deleteAt(51);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
       return 0; 
}
