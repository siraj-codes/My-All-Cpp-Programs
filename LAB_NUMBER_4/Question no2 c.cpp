#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter the Number to see the Season (1-12) : ";
	cin>>num;
	cout<<endl;
	
	switch(num)
	{
		case 12 :
		case 1  :
	  	case 2  :
	  		cout<<"The season is Winter";
	  	break;	
	  		
	  	case 3  :
		case 4  :
	  		cout<<"The season is Spring";
	  	break;	
	  	
		case 5  :
		case 6  :
	  	case 7  :
	  	case 8  :
		case 9  :  	
	  		cout<<"The season is Summer";
	  	break;	
	  	
	  	case 10  :
		case 11  :
	  		cout<<"The season is Autumn ";
	  	break;	
	  	
	  	default  :
	  		cout<<"Entry is out of range (1-12)";
	  	break;
	  	  
	}

return 0;
}		  	
	  
	  
	  
	  
		
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  


