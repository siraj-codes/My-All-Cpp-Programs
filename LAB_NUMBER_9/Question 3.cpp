#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	string f;
	cout<<"Enter your number here in xxxx-xxxxxxx format : ";
	getline(cin,num);

	if(num[4]=='-'&&num[0]=='0'&&num[1]=='3'&&num[2]=='0'&&num[3]=='0'){
		cout<<"Your Mobile Net-Work is : "<<" Mobilink ";
	}
	else if(num[4]=='-'&&num[0]=='0'&&num[1]=='3'&&num[2]=='3'&&num[3]=='3'){
		cout<<"Your Mobile Net-Work is : "<<" Ufone ";
	}
	else if(num[4]=='-'&&num[0]=='0'&&num[1]=='3'&&num[2]=='1'&&num[3]=='5'){
		cout<<"Your Mobile Net-Work is : "<<" Zong ";
	}
	
	else if(num[4]=='-'&&num[0]=='0'&&num[1]=='3'&&num[2]=='1'&&num[3]=='5'){
		cout<<"Your Mobile Net-Work is : "<<" Telenor ";
	}
return 0;
}

