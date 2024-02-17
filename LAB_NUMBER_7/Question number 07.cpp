#include <iostream>
using namespace std;

int main()
{

	int i , s , c=1;
	
	cout<<"Enter the array range here : ";
	cin>>s;
	
	int array1[s] , array2[s];
	
	for(i=0;i<s;i++){
		cout<<"Enter value "<<i+1<<" Here :  ";
		cin>>array1[i];
	}
	
	for(i=0;i<s;i++){
		array2[i]=array1[s-c];
		c++;
	}
	
	cout<<"The value of the first arrays are "<<endl;
	for(i=0;i<s;i++){
		cout<<array1[i]<<" ";
	}
	
	cout<<endl<<"The value of the second arrays are "<<endl;
	for(i=0;i<s;i++){
		cout<<array2[i]<<" ";
	}

return 0;
}


