#include <iostream>
using namespace std;

int main()
{
	int range;
	int i;
	cout<<"Enter the range up to which you want to find table: ";
	cin>>range;
	
	for (i=1;i<=range;i++)
	{
		cout<<endl<<"Table of "<<i<<endl;
		
		
		for (int j=1;j<=10;j++)
		{
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
	}

return 0;
}

