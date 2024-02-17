#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter the range upto which the loop should run : ";
	cin>>num;
	
	for(int i=0;i<=num;i+=5)
	{
		if(num%5==0)
		{
			cout<<endl<<i;
			
		}
	}
	
return 0;
}

