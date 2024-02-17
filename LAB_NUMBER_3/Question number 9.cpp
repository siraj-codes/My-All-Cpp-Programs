#include <iostream>
using namespace std;

int main()
{
 int num1 ,num2;
 char op;
 
 cout<<"Enter number 1 here : ";
 cin>>num1;
 
 cout<<"Enter number 2 here : ";
 cin>>num2;
 
 cout<<"Enter a Operator (+,-,*,/) : ";
 cin>>op;
 
 if(op=='+')
 {
 	cout<<endl;
 	cout<<"Operator is"<<op<<" result is number1+number2 = "<<num1+num2;
 }
 
else if(op=='-')
 {
 	cout<<endl;
 	cout<<"Operator is"<<op<<" result is number1-number2 = "<<num1-num2;
 }
 
else if(op=='*')
 {
 	cout<<endl;
 	cout<<"Operator is"<<op<<" result is number1*number2 = "<<num1*num2;
 }
 
else if(op=='/')
 {
 	cout<<endl;
 	cout<<"Operator is"<<op<<" result is number1/number2 = "<<num1/num2;
 }
 
else
{
	cout<<"Invalid Operator!!!";
}
 

return 0;
}




