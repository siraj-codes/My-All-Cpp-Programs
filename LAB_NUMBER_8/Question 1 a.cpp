#include <iostream>
using namespace std;
int mod(int,int);
int subc(int,int);
int multi(int,int);
int div(int,int);

int main()
{
	int num1,num2;
	int mo,sub,m,d;
	cout<<"Enter number 01 ";
	cin>>num1;
	cout<<"Enter number 02 ";
	cin>>num2;
	
	sub=subc( num1, num2);
	cout<<"Subtraction of "<<num1<<" - "<<num2<<" = "<<sub;
	cout<<endl;
	
	m=multi( num1, num2);
	cout<<"Multiplication of "<<num1<<" * "<<num2<<" = "<<m;
	cout<<endl;
	
	d=div( num1, num2);
	cout<<"Divison of "<<num1<<" / "<<num2<<" = "<<d;
	cout<<endl;
	
	mo=mod(num1,num2);
	cout<<"Mod of "<<num1<<" % "<<num2<<" = "<<mo;
	cout<<endl;
	
return 0;
}

	int mod(int num1,int num2){
		int mo=num1%num2;
		return mo;
	}
	
	int subc(int num1,int num2){
		int sub=num1-num2;
		return sub;
	}
	
	int multi(int num1,int num2){
		int m=num1*num2;
		return m;
	}
	
	int div(int num1,int num2){
		int d=num1/num2;
		return d;
	}
	

