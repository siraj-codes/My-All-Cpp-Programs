#include <iostream>
using namespace std;
bool E_O (int);

int main()
{
	int num,num2;
	bool EorO;
	
	cout<<"Enter any number here : ";
	cin>>num;
	
	EorO=E_O(num);
	cout<<EorO;
	
	cout<<"\nEnter number to check if it is even or not : ";
	cin>>num2;
	
	if(EorO==1){
		if(num2%2==0)
		cout<<"\nThe number is Even";
		else
		cout<<"The number is not Even";	
	}
	
	
	if(EorO==0){	
		if(num2%2!=0)
		cout<<"\nThe number is not Even";
		else
		cout<<"The number is Even";
	}
	
	

return 0;
}

	bool E_O (int num){
		bool even_Or_odd;
		if(num%2==0)
		even_Or_odd=true;
		else if(num%2!=0)
		even_Or_odd=false;
		
		return even_Or_odd;
	}

