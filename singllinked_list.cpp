#include<iostream>
using namespace std;
class Node{
	public :
		int key;      //   key is just varaible to store some value.
		int data;     //data is a variable like key. 
		Node* next;    // next  is pointer ,to point  next node ,of class node.
		
		Node()       //default constructor.It is for having some default value.
		{
			key=0;
			data=0;         //default values.
			next=NULL; 
		}
		Node(int k, int d)     // parameterised contrctor .For Passinf some values.
		{ 
		   key=k;         // when we will give value form main() .then it will be.e.g . k=1,d=10; now k ,d will replace the key and data  default value which is bydefault is k=o,d=0;
		   data=d;
		}
};
    
 class singlelinkedlist
 { public:
 	  Node* head ;  // head pointer is to point the head node or first node .  // eg  s is an object having head*. head*  is having #10 .#10 is address of n1 node. and n1 contains n1(1,10)
 	  
    singlelinkedlist()     // default constructor.
    {
    	head=NULL;
	}
	singlelinkedlist(Node  *n)
	{
		head=n; //  same address will stored in head pointer of an object.i.e. n1(1,10) is new node and n1 address is stored in *head.
	}
	//1. to check if node is exists using key value.
	Node* nodeexsist(int k) //for traversing.
	{
		Node* temp=NULL;
		Node* ptr=head;
		while(ptr!=NULL)
		{
		if(ptr->key==k)
		    { 
		      temp=ptr;
			}
			ptr=ptr->next;	
		}
		return temp;
	}
	//2. append a node to list. append happens at the end of the list.
	
	void appendnode(Node* n)          //it is complicated because we have to travers or check till the end.
	{
		if (nodeexsist(n->key)!=NULL)  //to check  same key value node is  exsist or not.
		{
			cout<<"Node is already Exsist with key value:"<<n->key<<"Append another Nod with Different key Value"<<endl;
		}
		else {
			if(head==NULL)   //thier is no node at start.
			{
				head=n;   // now first node is in head*
				cout<<"Node Appended"<<endl;
			}
			  else
			  {
			  	Node* ptr=head;   // suppose head is n1.
	             	while(ptr->next!=NULL)  //while ptr have address of n1 node and n1 is also having address of n2 nodei.e.(ptr->next) which is not equal to null. condition is true.
	           	{
				   ptr=ptr->next;	// ptr will stored the next .i.e. address of n2.// when it will no it will reached at the end of node.
			  	 }
			  	 ptr->next=n;  //this condition is after NULl and n is which n it is.ar value which is pass at start.
			  	 cout<<"Node Appended"<<endl;
			  }
		}
	}
	
	//3.Prepend Node .Attached  at the start.
	void prependnode(Node* n)             //we have to do at the starting.
	{
			if (nodeexsist(n->key)!=NULL)  //to check  same key value node is  exsist or not.
		{
			cout<<"Node is already Exsist with key value:"<<n->key<< "Append another Nod with Different key Value"<<endl;
		}
		else{
			 n->next=head;      // suppose we have to add n4 node .now n is  n4 node and it has address of n1(i.e. head).
			 //now n4 is head.
			 head=n;
			 cout<<"Node Prepended"<<endl; 
			 	}
	}
	//4/ insert a node after a particular node in list.
	void insertnode(int k, Node* n) //key is for particular node .after which we have to attached node .
	{
	    // we have to add n4 node after n2 and before n3. and we have to check key.
		Node* ptr= nodeexsist(k);	//to check the node is exsist or not.
		if(ptr==NULL)
		{
			cout<<"No Node is Exsist with this Key Value"<<k<<endl;
		}
		else  // key value must unique.
		{
				if (nodeexsist(n->key)!=NULL)  //to check  same key value node is  exsist or not.
		{
			cout<<"Node is already Exsist with key value:"<<n->key<< "Append another Nod with Different key Value"<<endl;
		}
		else{
			 n->next=head;   //n=n4   .suppose we have to add n4 node .now n is  n4 node and it has address of n3(i.e. head).
			 ptr->next=n;
			 cout<<"Node Inserted"<<endl;
		}
		}
	}
	//5.Update
	void updatenode(int k, int d)
	{
		Node* ptr=nodeexsist(k);
		if(ptr!=NULL)
		{
			ptr->data=d;
			cout<<"Node data updateded successfully";
		}else
		{cout<<"Node doesnt exsist with this key value"<<k<<endl;
		}
	}

 };  
int main()
{
	
	singlelinkedlist s;
	int option;
	int key,data,k;
	int key1,k1,data1;
	do
	{    cout<<"Choose Option"<<endl;
		cout<<"1. Append ()"<<endl;
		cout<<"2. Prepend()"<<endl;
		cout<<"3. Insert()"<<endl;
		cout<<"4. update()"<<endl;
		
		cin>>option;
		Node*  n1=new Node();
	//	Node n1;
		switch(option)
		{
			case 1:
				cout<<"enter the key and data for append."<<endl;
				cin>>key;
				cin>>data;
				n1->key=key1;
				n1->data=data1;
				s.appendnode(n1);
				break;
			case 2:
					cout<<"enter the key and data for prepend"<<endl;
				cin>>key;
				cin>>data;
				n1->key=key1;
				n1->data=data1;
				s.prependnode(n1);
				break;
			case 3:
				cout<<"enter the key of node after which u have to insert node."<<endl;
				cin>>k1;
				cout<<"enter the key and data for new node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.insertnode(k1,n1);
				break;
			case 4:
			   cout<<" update node by key operation......enter the key and data for update."<<endl;
				cin>>key;
				cin>>data;
				s.updatenode(key1,data1);
				break;
			default:
				cout<<"enter proper choose";
		}
	}while(option!=00);
		return 0;
}
