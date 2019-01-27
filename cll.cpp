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
class CSLL{
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
    void DeleteAt(int pos){
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
    void Delet(){
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
    
    int CountItems(){
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
    cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"----------------------------circular Linked List Object.--------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    
    CSLL list1; //objects of LinkedList
    int choice;
    int value = 0;
    int pos = 0;
    cout<<"Enter 1 to add an element to the end of the linked list"<<endl;
    cout<<"Enter 2 to add an element at a specified position in the linked list"<<endl;
    cout<<"Enter 3 to delete an element from the end of the linked list"<<endl;
    cout<<"Enter 4 to delete an element from a specified position in the linked list"<<endl;
    cout<<"Enter 5 to count the number of elements in th linked list"<<endl;
    cout<<"Enter 6 to display the elements of the linked list"<<endl;
    cout<<"Enter 0 to exit."<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    
    do
	{
		cout<<"Enter your choice"<<endl;
        cin>>choice;
        
		switch(choice)
		{
		    case 1 :cout<<"Enter the value to be added to the end of the linked list"<<endl;
		        	cin>>value;
		        	list1.insert(value);
					break;
			
			case 2 :cout<<"Enter the value to be added to the linked list"<<endl;
			        cin>>value;
			        cout<<"Enter the position where the value has to be inserted"<<endl;
			        cin>>pos;
			        list1.InsertAt(value,pos);
					break;
			
			case 3 :list1.Delet();
			        cout<<"  number has been deleted from the linked list."<<endl;
					break;
					
			case 4 :cout<<"Enter the position to be deleted from the linked list"<<endl;
			        cin>>pos;
			        list1.DeleteAt(pos);
			        cout<<" number has been deleted from the linked list from its specified position."<<endl;
			        break;
			        
			case 5 :value = list1.CountItems();
			        cout<<"The number of elements in the list is "<<value<<endl;
					break;
					
			case 6 :list1.display();
					break;
	    	case 0 :break;
            default:cout<<"Enter a valid integer."<<endl;
				
		}
    	    
	}while(choice!=0);
    
       return 0; 
}
