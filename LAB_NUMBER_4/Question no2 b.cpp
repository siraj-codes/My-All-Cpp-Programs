#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter the Number to see the month (1-12) : ";
	cin>>num;
	cout<<endl;
	
	switch(num)
	{
		case 1 :
			cout<<"The Month is January";
		break;	
		
		case 2 :
			cout<<" The Month is February";
		break;
		
		case 3 :
			cout<<"The Month is March";
		break;
		
		case 4 :
			cout<<"The Month is April";
		break;
		
		case 5 :
			cout<<"The Month is May";
		break;
		
		case 6 :
			cout<<"The Month is June";
		break;
		
		case 7 :
			cout<<"The Month is July";
		break;
		
		case 8 :
			cout<<"The Month is August";
		break;
		
		case 9 :
			cout<<"The Month is September";
		break;
		
		case 10 :
			cout<<"The Month is October";
		break;
		
		case 11 :
			cout<<"The Month is November";
		break;
		
		case 12 :
			cout<<"The Month is December";
		break;
		
		default :
			cout<<"The number is out of range (1-12)";
		break;
		
		
	}

return 0;
}
