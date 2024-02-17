#include <iostream>
using namespace std;

int main()
	{
	int s , i , sum=0;
	
	cout<<"Enter range of arrays here : ";
	cin>>s;
	int array[s];
	for(i=0;i<s;i++){
		cout<<"Enter value number"<<i+1<<": ";
		cin>>array[i];
		sum+=array[i];
	}
	
	cout<<"Sum of the elements in this array is : "<<sum;

return 0;
}



