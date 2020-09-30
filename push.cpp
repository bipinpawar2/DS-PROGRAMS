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
	             else
				     {
	                    top++;          // now value become 0.
	                    arr[top]=val;	
                        	}
         }
	  
}
};
	   int main()
   {
   	     int value;
   	     stack s1;
   	 	 cout<<"Enter the item to push in stack"<<endl;
		 cin>>value;
		 s1.push(value);
		 if(s1.isFull())
			    cout<<"Stack is Full"<<endl;
			else 
			    cout<<"Stack is NotFull"<<endl;	
		
	 return 0;
} 
