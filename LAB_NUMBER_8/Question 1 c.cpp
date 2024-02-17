#include <iostream>
using namespace std;
int gs (int,int);
int main()
{
	int num1,num2,maxi;
	
	cout<<"Enter number 1 here : ";
	cin>>num1;
	cout<<"Enter number 2 here : ";
	cin>>num2;
	
	maxi= gs (num1,num2);
	cout<<"The greater number here is : "<<maxi;
	
	
return 0;
}

	int gs (int num1,int num2){
		int max;
		if(num1>num2)
		max=num1;
		else if(num1<num2)
		max=num2;
		
		return max;
	}
	


