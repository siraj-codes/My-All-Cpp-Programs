#include <iostream>
using namespace std;

int main()
{
	int num=0 , sum=0;
	
    
	while(num>=0)
    {	if(num>=0 && num<=30) 
	
     	{
		cout<<"Enter any number here : ";
    	cin>>num;
    	
    		if (num>=0 && num<=30)
    		{
	   		sum+=num;
    		}
    	}
    	
    	if(num>30)
		{
		cout<<endl<<"Number is greater then 30 and wouldn't be calculated";
		cout<<"\n\nEnter any number here : ";
    	cin>>num;
		}
    }
    
      cout<<"\n\n The sum is :  " <<sum;	
		
		
		
		
	

return 0;
}

