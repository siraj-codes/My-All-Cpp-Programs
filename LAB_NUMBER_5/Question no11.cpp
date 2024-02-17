#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"How many numbers do you have?> ";
	cin>>num;
	
	if(num<0)
	{
	cout<<"Sorry, you have entered an invalid input.";
	cout<<"\nThank-you.";	
	} 
	
	if(num==0)
	{
	cout<<"Opps, you don't have any number for me to process.";
	cout<<"\nThank-you.";	
	}
	
	if(num>0)
	{
		float a, max , min;
		int inp  ;
		
	 for(inp=1;inp<=num;inp++)
	 {
	 	cout<<"Please enter a number_"<<inp<<" --> ";
		cin>>a;
		
		if(inp==1)
		{
			min=a;
			max=a;
		}
		if(a<min)
		{
			min=a;
		}
		if(a>max)
		{
			max=a;
		}
	 } 
		
		
	  
		
		cout<<endl<<"The greatest number is "<<max<<endl;
		cout<<endl<<"The smallest number is "<<min<<endl;
	}

return 0;
}

