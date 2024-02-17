#include <iostream>
using namespace std;

int main()
{
	int count=0;
	int array1[5]={1,2,3,4,5};
	int array2[4]={6,7,8,9};
	int array3[9];

	
	
	cout<<"Value of first array are : "<<endl;

	for(int i=0;i<5;i++){
		cout<<array1[i]<<" ";
	}
	
	cout<<endl;
	cout<<"Value of second array are : "<<endl;
	
	for(int i=0;i<4;i++){
		cout<<array2[i]<<" ";
	}

	
		for(int i=0;i<5;i++){
			array3[count]=array1[i];
			count++;
		}
		for(int i=0;i<4;i++){
			array3[count]=array2[i];
			count++;
	}

	cout<<endl;
	cout<<"Value of third array are : "<<endl;
	
	for(int i=0 ; i<9 ; i++)
	{
		cout<<array3[i]<<" ";
	}
return 0;
}


