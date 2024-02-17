#include <iostream>
using namespace std;

int main()
{
 	int number ;
    
    cout<<"Enter an integer number here : ";
    cin>>number;
    
    if(number != 0)
    {
    	if (number%2==0)
    	{
    		cout<<"Number is a even number "<<endl;
    	}
    		else 
    		{
    			cout<<"Number is a odd number"<<endl;
			}

	}
	
	else
	{
		cout<<"Number is neither even nor odd It is Zero"<<endl;
	}
	
	cout<<"This line will alaways be printed"<<endl;
    
    


//	int a;
//	cout<<"Enter a number : ";
//	cin>>a;
//	
//	switch (a)
//	{
//	  
//	case 100 :
//		cout<<"The value is 100 ";
//	break;
//	
//	case 200 :
//	 	cout<<"The value is 200";
//	break;
//	
//	case 300 :
//		cout<<"The value is 300";
//	break;
//	
//	default :
//		cout<<"The number is other the \"100\" ,\"200\"  ,\"300\" ";
//	break;
//		
//	}	

//	int a=10;
//	if(a) // false on 0 other numbers true
//	{
//		cout<<"ABC"<<endl;
//	}


	

return 0;
}

