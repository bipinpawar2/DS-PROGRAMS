#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class  stack
{
	private :
		  int top;
		  int arr[5];
		  
	public:
	  stack()
	  { 
	  top=-1;
	  for(int i=0;i<5;i++)
	  {
	  	arr[i]=0;
	  }
	  }
	  
	  bool isEmpty()
	  	  {
	  	if(top==-1)
	  	{
	  		return true;
		  }
		  else{
		  	return false;
		  }
	}
		  bool isFull()
	  {
	  	if(top==-4)
	     	{
	  	    	return true;
	   	  }
		  else
		  {
		  	return false;
		  }
	  }
	  
	  void push(int val)
	  {
	  	if(isFull())  	
        	{
	          cout<<"Stack is Full";
			  }
	             else{
	                    top++;          // now value become 0.
	                    arr[top]=val;	
                    	}
	         } 
	  
	  int pop()
	  {
	  	if(isEmpty())
	  	{
	  		cout<<"stack is empty"<<endl;
	  		return 0;
		  }
		  else
		  {
		  	int popValue=arr[top];
		  	arr[top]=0;  // now top is  0.
		  	top--;       // we reduce by 1.
		  	return popValue;
		  }
	  }
	  
	  int count()
	  {
	  	return (top+1);
	  }
	  
	  int peek(int pos)
	  {
	  	if(isEmpty())
	  	{
	  		cout<<"stack is empty";
	  		return 0;
		  }
		  else
		  {
		  	return arr[pos];
		  }
	  }
	  
	  
	  void change(int pos, int val)
	  {
	  	arr[pos]=val;
	  	cout<<"value has been changed at location "<<pos<<endl;
	  }
	  
	  void display()
	  {
	     cout<<"All value in stack"<<endl;
	    for(int i=4;i>=0;i--)
	    {
	    	cout<<arr[i]<<endl;
		}
 	}
	
};


     int main()
   {
   	 stack s1;
   	 int option,value,position;
   	 do
   	 {
   	 	cout<<"Press 1. For Push"<<endl;
        cout<<"Press 2. For Pop"<<endl;
		cout<<"Press 3. For isEmpty()"<<endl;
		cout<<"Press 4. For isFull()"<<endl;
		cout<<"Press 5. For Peek"<<endl;
		cout<<"Press 6. For count()"<<endl;
		cout<<"Press 7. For Change"<<endl;
		cout<<"Press 8. For Dispaly All Element()"<<endl;
		cout<<"Press 9. For Clear Screen "<<endl;   	
		cout<<" "<<endl; 	
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter the item to push in stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
				
	        case 2:
				cout<<"Pop function is called  and Poped Value is"<<s1.pop()<<endl;
				break;
				
			case 3:
			if(s1.isEmpty())
			    cout<<"Stack is Empty"<<endl;
			else 
			    cout<<"Stack is NotEmpty"<<endl;		
			    break;
			    
			case 4:
			if(s1.isFull())
			    cout<<"Stack is Full"<<endl;
			else 
			    cout<<"Stack is NotFull"<<endl;	
		    break;    
			    
			case 5:
			      cout<<"Enter the postion of item to peek"<<endl;
				  cin>>position;
				  cout<<"peak function has been called and value "<<position<<"is"<<s1.peek(position)<<endl; 
				  break;
		  case 6:
			      cout<<"cout function is been called. no of items in stack"<<s1.count()<<endl;
			      break;
		  case 7: 
		          cout<<"Changed Function has been called"<<endl;
				  cin>>position;
				  cout<<endl;
				  cout<<"Enter the value u want to change";
				  cin>>value;
				  s1.change(position,value);		  
				  break;
         case  8:
         	    cout<<"Display Function is Called"<<endl;
         	    s1.display();
         	    break;
         case 9: 
		         system("cls");
				 break;
				 default:
				  cout<<"enter option from above no"<<endl;	    
		}
   	 	
   	 	
		}while(option!=0);
   	 
	return 0;
} 






















