#include<iostream>
using namespace std;
void bubblesort(int a[])
{    
  int i,j, size;  
  for(i=0;i<5;i++)
	     {
	          	for(j=0;j<(5-i-1);j++)
	           	{
	        		if(a[j]>a[j+1])
		             	{
		            	   int temp=a[j];          // swapping . 
		              		a[j]=a[j+1];
		            		a[j+1]=temp;
			            }
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
       bubblesort(array);                 //sorting. calling bubllesort method.
       cout<<"After Sorting The Element"<<endl;
	     for(int i=0;i<5;i++)            // this loop is for display 5 times .
	     {
	     	cout<<array[i]<<endl;
		 }
	
}
