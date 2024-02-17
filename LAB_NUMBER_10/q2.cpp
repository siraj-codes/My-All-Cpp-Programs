#include <iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of array :  ";
	cin>>size;
	
	int array[size];
	int *array_ptr;
	
	array_ptr=array;
	
	cout<<endl<<"\tInput by the help of pointers here "<<endl<<endl;
	
	for(int i=0 ; i<size ;i++){
		
		cout<<"Enter value number "<<i+1<<" here : ";
		cin>>*(array_ptr+i);
		cout<<endl;
		
	}
	
	cout<<endl<<"\tOutput by the help of pointers here "<<endl<<endl;

	
	for(int i=0 ; i<size ;i++){
	
		cout<<endl<<"Value number "<<i+1<<" is : "<<*(array_ptr+i);
		
	}

return 0;
}

