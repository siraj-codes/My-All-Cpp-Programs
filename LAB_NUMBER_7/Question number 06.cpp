#include <iostream>
using namespace std;

int main()
{
	int i , s;
	
	cout<<"Enter the array range here : ";
	cin>>s;
	
	int array[s];
		
	for(i=0;i<s;i++){
		cout<<"Enter value "<<i+1<<" Here :  ";
		cin>>array[i];
	}
	cout<<"The value on ODD indicies are : "<<endl;
	for(i=0;i<s;i++){
		if(i%2!=0){
			cout<<array[i]<<" ";
		}
	}


return 0;
}


