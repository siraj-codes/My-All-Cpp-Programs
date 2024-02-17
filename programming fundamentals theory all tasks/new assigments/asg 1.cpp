#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
	cout<<"Enter Number "<<i+1<<" : ";
	cin>>arr[i];
	}
	
	cout<<"\nIn Ascending Order ";
	 for(int i=0;i<10;i++)
	 {
	 	for(int j=i+1;j<10;j++)
	 	if(arr[j]<arr[i])
		 {
	 	int temp=arr[j];
	 	arr[j]=arr[i];
	 	arr[i]=temp;
	    }
    }
		
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nIn Descending Order ";
	
		 for(int i=0;i<10;i++)
	 {
	 	for(int j=i+1;j<10;j++)
	 	if(arr[j]>arr[i])
		 {
	 	int temp=arr[j];
	 	arr[j]=arr[i];
	 	arr[i]=temp;
	    }
    }
		
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
