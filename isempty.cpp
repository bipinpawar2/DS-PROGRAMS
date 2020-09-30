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
};

   int main()
   {
   	 stack s1;
   	 	if(s1.isEmpty())
			    cout<<"Stack is Empty"<<endl;
			else 
			    cout<<"Stack is NotEmpty"<<endl;		
		
	 return 0;
	 }		    
