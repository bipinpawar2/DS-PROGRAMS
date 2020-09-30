			#include<iostream>
			#include<stdio.h>
			using namespace std;
			class queue{
	private:
		int front;
		int rear;
		int arr[5];
		public:
			queue()
			{
				front=-1;
				rear=-1;
				for(int i=0;i<5;i++)
				{
					arr[i]=0;
				}
			}  
			bool isEmpty()
			{
				if(front==-1 && rear==-1)
				    return true;
				else
			   	    return false;
			}
			bool isFull()
			{
				if(rear=4)
				    return true;
				else
			   	    return false;
			}
           void enqeue(int val)
           {
           	if(isFull())
           	{
           		cout<<"Queue is full"<<endl;
           		return;
			   }
			   else if(isEmpty())
			   {
			   
			   rear=front=0;
			   
			   arr[rear]=val;
			  
		   }
		   else{
		   	rear++;
		   	arr[rear]=val;
		   	
		   }
    }
    
    int dequeue()
    {         int x=0;
    	  	if(isEmpty())
           	{
           		cout<<"Queue is Empty"<<endl;
           		return 0;
			   }
		     else if(front==rear)
		     {
		     	x=arr[front];
		     	arr[front]=0;
		     	rear=-1;
		     	front=-1;
		     	return x;
			 }
			 else{
			 	cout<<"front value is"<<front<<endl;
			 	x=arr[front];
			 	arr[front]=0;
			 	front++;
			 	return x;
			 	
			 }
	}
         
           int count()
           {
           	return(rear-front+1);
		   }
		    void display()
	  {
	     cout<<"All value in Queue"<<endl;
	    for(int i=4;i>=0;i--)
	    {
	    	cout<<arr[i]<<endl;
		}
 	}
};

   int main()
   {
   	queue q1;
   	int value,option;
   	
   	do
   	{
   		  cout<<"Enter the operation which u want to perform"<<endl;
	      cout<<"Press 1. For Enqueue"<<endl;
        cout<<"Press 2. For DeEnqueue"<<endl;
		cout<<"Press 3. For isEmpty()"<<endl;
		cout<<"Press 4. For isFull()"<<endl;
		cout<<"Press 5. For count()"<<endl;
		cout<<"Press 6. For Dispaly All Element()"<<endl;
		cout<<"Press 7. For Clear Screen "<<endl;   	
		
   		cin>>option;
   		switch(option)
   		{
   		  case 1: cout<<"queued OPeration"<<endl;
   		     cout<<"enter the value";
			 cin>>value;
			 q1.enqeue(value);
			 break;
		  case 2:
		  	cout<<"Dequeued OPeration"<<q1.dequeue()<<endl;
		  	break;
		  	
   		case 3:
		   if(q1.isEmpty())
		   cout<<"Queue is Empty";
		   else
		   	cout<<"Queue is NotEmpty";
		   	break;
		   	
   			case 4:
   				  if(q1.isFull())
		           cout<<"Queue is Full";
		           else
		   	         cout<<"Queue is NotFull";
		          	break;
		 case 5:
		 cout<<"Count operation \nCount of items in Queue:"<<q1.count()<<endl;
		 break;
		 case 6:         	
	             cout<<"Display Function"<<endl;
	             q1.display();
	             break;
	     case 7:        
	         	 system("cls");
	             break;   		 	   
	}
   		
   		
	   }while(option!=0);
	   return 0;
   }


















