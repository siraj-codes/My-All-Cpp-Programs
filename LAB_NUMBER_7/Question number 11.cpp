#include <iostream>
using namespace std;

int main()
{
	int s , i , j;
	cout<<"Enter the array range : ";
	cin>>s;
	int array[s];
	for(i=0 ; i<s ; i++){
		cout<<"Enter value "<<i+1<<" ";
		cin>>array[i];
		
	}
		
	for(i=0 ; i<s ; i++){
			for( j=i+1;j<s;j++){
				if(array[i]>array[j]){
					int c;
					c=array[i];
					array[i]=array[j];
					array[j]=c;
				}
			}
	}
	
	cout<<"The smallest value is : "<<array[0];

return 0;
}
	
	

	
	
	
	
	
	
	
	
	
	




