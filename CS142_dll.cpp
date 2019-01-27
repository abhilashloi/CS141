#include <iostream>
using namespace std;
// creating class node
class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    Node * prev;
    // default Construct that makes the ptr to NULL
    Node(int value){
        next = NULL;
        prev = NULL;
        data = value;
    }
};
// creating class DLL(doubly linked list)
class LinkedList{
    public:
    Node * head, *tail;
    dolinklst()
	{
        head = NULL;
        tail = NULL;
    }
    void insert(int value)
	{
        // Create a new node
        Node * temp = new Node(value);
        // CHeck if empty list
        if(head == NULL){
            head = temp;
        }  
        else{ // If not empty list. 
            Node * current = head;
            while(current->next != NULL)
                current = current->next;
            current->next = temp;
            temp->prev = current;    
        }
    }
    void display(){
        Node *current = head;
        Node *tail;
        cout << "Print in   order : ";
        while(current!=NULL){
            cout <<current->data<< "<->"; 
            // Store the current in last (to catch the tail to print in reverse)
            tail = current;
            // Move Forward
            current = current->next;
        }
        cout << endl;
        cout << "Print in reverse order : ";
        while(tail!=NULL){
            cout <<tail->data<< "<->";
            // Move backwards 
            tail = tail->prev;
        }
        cout << endl;   
    }
    
    void InsertAt(int value, int pos)
	{
		//count the numbers
		int count=0;
        Node *current=head;
        for(int i=0;current!=NULL;i++)
        {
            count++;
            current=current->next;
        }
        //Put conditionon pos
        if(pos>0 && pos<=count)
        {
            //If position is 1st position
            if(pos==1)
            {
                Node *current=head;
                Node *temp2=new Node(value);
                temp2->data=value;
                temp2->next=current;
                current->prev=temp2;
                head=temp2;
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
                temp2->next->prev=temp2;
                temp2->prev=current;
            }
        }
        else
        {
            cout<<pos<<" is invalid position"<<endl;
        }
    }
    void deleteAt(int pos){
        // count the numbers
        int count=0;
    	Node *current;
    	current=head;
    	if(pos==1)//checking for head posn
    	{
          head->next->prev=NULL;
          head=head->next;
    	}
    	else          //checking for the rest
    	{
          while(current!=NULL)
          {
                 count++;
                 if(count==pos-1)
                 {
                        if(current->next->next==NULL)
                        {
                              current->next=current->next->next;
                        }
                        else
                        {
                              current->next=current->next->next;
                              current->next->prev=current;
                              current=current->next;
                              break;
                        }
                 }
                 current=current->next;
          }
           
    	}
    }
    // delete function to delete a node at last
    void del(){
        // Deletes the last element.
        tail=head;
        while(tail->next->next != NULL)
        {
        	tail= tail->next;
		}
		tail->next = NULL;
    }
    
 int counting(){
        // Counts the Number of items.
        int count = 0;
	    Node* temp = head;//pointer to go from the List
	    while(temp != NULL)
	    {
	        temp = temp->next;//pointer moves forward
	        count++;//incrementing
	    }
	    return count;
    }

};

int main()//main function
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

