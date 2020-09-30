#include<iostream>
using namespace std;

void linearsearch(int a[],int n)
{
	int found=-1;
	for(int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			cout<<"Element found at location "<<i<<endl;
			found =0;
			
		}
	}
	if (found==-1)
	{
		cout<<"element Not Found"<<endl;
	}
}
int main()
{
	int arr[5]={10,20,30,40,100};
	cout<<"Please Enter The Element To Be Search"<<endl;
	int num;
	cin>>num;
	linearsearch(arr,num);
}
