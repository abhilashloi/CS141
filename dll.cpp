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
class dolinklst{
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
    void DeleteAt(int pos){
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
    void Del(){
        // Deletes the last element.
        tail=head;
        while(tail->next->next != NULL)
        {
        	tail= tail->next;
		}
		tail->next = NULL;
    }
    
    int CountItems(){
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
    cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"----------------------------Doubly Linked List Object.--------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    
    dolinklst list1; //objects of LinkedList
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
			
			case 3 :list1.Del();
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

