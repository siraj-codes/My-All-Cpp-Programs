#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int *ptr;
	
	ptr = &a;
	
	cout<<a<<"  "<<&a;
	cout<<endl;
	cout<<*ptr<<"  "<<ptr;
	
	a=20;
	cout<<endl<<endl;
	cout<<a<<"  "<<&a;
	cout<<endl;
	cout<<*ptr<<"  "<<ptr;
	
	
	*ptr=200;
	cout<<endl<<endl;
	cout<<a<<"  "<<&a;
	cout<<endl;
	cout<<*ptr<<"  "<<ptr;
	
return 0;
}

