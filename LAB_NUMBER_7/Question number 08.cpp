#include <iostream>
using namespace std;

int main()
{
	int i;
	int array1[5]={1,2,3,4,5};
	int array2[5]={1,2,3,4,5};
	int array3[5];
	
	cout<<"The values of first array are : "<<endl;
	for(i=0;i<5;i++){
		cout<<array1[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"The values of second array are : "<<endl;
	for(i=0;i<5;i++){
		cout<<array2[i]<<" ";
	}
	
	for(i=0;i<5;i++){
		array3[i]=array2[i]+array1[i];
	}
	
	cout<<endl;
	
	cout<<"The values of third array are : "<<endl;
	for(i=0;i<5;i++){
		cout<<array3[i]<<" ";
	}
	
	

return 0;
}


