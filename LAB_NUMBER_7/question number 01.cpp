#include <iostream>
using namespace std;

int main()
{
	int s , i;
	
	cout<<"Enter range of arrays here : ";
	cin>>s;
	int array[s];
	for(i=0;i<s;i++){
		cout<<"Enter value number"<<i+1<<": ";
		cin>>array[i];
	}
	
	cout<<"The number in reverse order are : "<<endl;
	for(i=s-1;i>=0;i--){
		cout<<array[i]<<" ";
	}

return 0;
}

