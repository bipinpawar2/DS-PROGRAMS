#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e)
{
	int pivot=arr[e];
	int pindex=s;           //pindex is for track.
	for( int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
		int temp=arr[i];
		arr[i]=arr[pindex];
		arr[pindex]=temp;
		pindex++;
		}
	}
	    int temp=arr[e];
		arr[e]=arr[pindex];
		arr[pindex]=temp;
		return pindex;
}
void quicksort(int arr[],int s, int e)  // s=start index,e=end index.
{
   if(s<e)
   {
   	int p= Partition(arr ,s ,e);
   	quicksort(arr, s,(p-1));      //recursion for left part.
   	quicksort(arr,(p+1),e);
	   }	
}


int main()
{
	int size=0;
	cout<<"Enter the size"<<" ";
	cin>>size;
	int array[size];
	 cout<<"Enter "<<size<<" "<<"integer in any order"<<endl;
	 for(int i=0;i<size;i++)
	 {
	 	cin>>array[i];
	 }
     quicksort(array,0,(size-1)); // start index is 0 and end index is n-1;
	 cout<<"After sorting"<<endl;
	  for(int i=0;i<size;i++)       // for displaying element after sorting.just a simple loop.
	 {
	 	cin>>array[i];
	 }
	 return 0;
	 
}
