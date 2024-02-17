#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName;
	string lastName;
	
	string email=" @iba-suk.edu.pk ";
	cout<<"Enter your first name here : ";
	cin>>firstName;
	cout<<"Enter your last name here : ";
	cin>>lastName;
	
	cout<<"Your Email is :  "<<firstName+'.'+lastName+email;
return 0;
}

