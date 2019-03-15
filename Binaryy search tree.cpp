#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		//children
		Node *left;
		Node *right;
		
		Node(int value){
			
			data = value;
			left =NULL;
			right = NULL;
			
		}
};

class BiST{
	public:
		Node *root;
		BiST(){
			root = NULL;
			
		}
		void insert(int value){
			insert2(root,value);
			
		}
		void insert2(Node*curr,int value){
			//base case if curr is null,insert there
			if(root == NULL){
				root = new Node(value);
			}
			//else comppare the current data with value
			else if(value < curr->data){
				if(curr->left==NULL)curr->left = new Node(value);
				insert2(curr->left,value);
			}
			else{
				if(curr->right == NULL)curr->right = new Node(value);
				insert2(curr->right,value);
			}
			//if curr data <value>move right and call insert
			//else move it left and call insert
		}
		void display(){
			cout<<"printing traversal in inorder";
			cout<<endl;
			display2(root);
			cout<<endl<<endl;
			cout<<"printing travrsal in preorder";
			cout<<endl;
			display3(root);
			cout<<endl<<endl;
			cout<<"printing travversal in postorder";
			cout<<endl;
			display4(root);
			cout<<endl<<endl;
		}
		void display2(Node * curr){
			///base condition
			if (curr==NULL) return;
			//display left
			display2(curr->left);
			//display current
			cout<<curr->data<<",";
			//display right
			display2(curr->right);
	    }
	    	void display3(Node * curr){
			///base condition
			if (curr==NULL) return;
			//display current
			cout<<curr->data<<",";
			//display left
			display3(curr->left);
			//display right
			display3(curr->right);
	    }
	    	void display4(Node * curr){
			///base condition
			if (curr==NULL) return;
			//display left
			display4(curr->left);
			//display right
			display4(curr->right);
				//display current
			cout<<curr->data<<",";
	    }
	/*   void displayfancy(){
	    	displayfancy2(Node*curr,int spaces)
	    	
	    	if(curr==NULL) return;
	    	//display right
	    	displayfancy2(curr->right,spaces+1);
	    	for(int i=0;i<5*spaces;i++){
	    		cout<<" ";
			}
			cout<<curr->data<<endl;
			//display left
			displayfancy2(curr->left,spaces+1);
		}*/
			Node * search(int value){
				search2(value,root);
			}
			Node *search2(int value,Node* curr){
				if(value==curr->data)return curr;
				//smaller
				else if(value<curr->data)return search2(value,curr->left);
				//larger
				else if(value>curr->data)return search2(value,curr->right);
				//not found
				else{
					return NULL;
				}
			}
			/*int min(Node*curr){
	if(root==NULL) return NULL;
	int res=root->data;
	int lres=min(curr->left);
	int rrse=min(curr->right);
	if(lres<res){
		res=lres;
	}
}*/

			
		
};

int main(){
	BiST b1;
	b1.insert(101);
	b1.insert(20);
	b1.insert(399);
	b1.insert(67);
	b1.insert(52);
	b1.display();
	int n;
	cout<<"Enter the number you want to find in the tree"<<endl;
	cin>>n;
	if(b1.search(n) !=NULL)
	cout<<"The entered value"<<n<<"is found"<<endl;
	else
	    cout<<"The entered value"<<n<<"is NOT FOUND"<<endl; 
	return 0;
	
	
	
}
/*search(4)
Nodee*find min(Node*curr)
int count(Node * curr)
void replacewithparent(Node * curr,Node*
*/
