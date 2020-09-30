#include<iostream>
using namespace std;
void selection(int arr[])
{
	for(int i=0;i<4;i++)   
	{
		int min=i;
		
		   	for(int j=i+1;j<5;j++)
	          {
	           	if(arr[j]<arr[min])
	            	{
	           		min=j;
				   }
		    	}
		    	if (min!=i)
		    	{
		    		int temp=arr[min];
		    		arr[min]=arr[i];
		    		arr[i]=temp;
				}
	}
	
}

int main()
{
	int array[5];
		cout<<"Please Enter 5 element"<<endl;
    	for(int i=0;i<5;i++)            // this for loop is for taking 5 times user input.
       	{
		cin>>array[i];
     	}
     	selection(array);
         cout<<"After Sorting The Element"<<endl;
	     for(int i=0;i<5;i++)            // this loop is for display 5 times .
	     {
	     	cout<<array[i]<<endl;
		 }
		 return 0;
}
