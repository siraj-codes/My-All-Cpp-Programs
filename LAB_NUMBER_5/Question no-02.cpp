#include <iostream>
using namespace std;

int main()
{
	int  num;
	cout<<"Enter the range upto the loop should run : ";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
	
	 	if(i%2==0)
		{
			cout<<i<<" Even ";
			cout<<endl;
		}
		
		else if (i%2!=0)
		{
			cout<<i<<" Odd ";
			cout<<endl;
		}
		
			
		
	}

return 0;
}


