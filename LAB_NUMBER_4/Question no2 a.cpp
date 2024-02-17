#include <iostream>
using namespace std;

int main()
{
	int num1 , num2 ;
	char op;
	
	cout<<"Enter no:-1 : ";
	cin>>num1;
	cout<<endl;
	
	cout<<"Enter no:-2 : ";
	cin>>num2;
	cout<<endl;
	
	cout<<"Enter operator (+,-,*,/) : ";
	cin>>op;
	cout<<endl;
	
	switch(op)
	{
		case '+' :
		cout<<num1<<" + "<<num2<<" = "<<num1+num2;
		break;
		
		case '-' :
		cout<<num1<<" - "<<num2<<" = "<<num1-num2;
		break;
		
		case '*' :
		cout<<num1<<" * "<<num2<<" = "<<num1*num2;
		break;
		
		case '/' :
		cout<<num1<<" / "<<num2<<" = "<<num1/num2;
		break;
		
		default :
		cout<<"Invalid Operator !!";
		break;
		
		
		
		
		
		
		
		
		
	}
	
return 0;
}

