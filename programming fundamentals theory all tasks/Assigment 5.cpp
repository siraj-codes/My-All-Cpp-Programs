#include <iostream>
using namespace std;

int main()
{
		 int number, no1, no2, no3, no4, no5 , no6 , T_no ,T_no2 ,T_no3 , T_no4 , even = 0, odd = 0;

	
	 cout << "\n   Enter any six-digit number here: ";
	 cin >> number; 

	 cout << endl ;

     no1=number%10;   
   
     T_no=number/10; 
	
     no2=T_no%10;
   
     T_no2=T_no/10;
   
     no3=T_no2%10; 
   
     T_no3=T_no2/10; 
     
     no4=T_no3%10;
     
     T_no4=T_no3/10;
     
     no5=T_no4%10;
     
     no6=T_no4/10;
     

   
   
   
if(no1%2==0)
{
even=even+no1;
}
   
else if(no1%2 !=0 )
{
odd=odd+no1;
}
   
if(no2%2==0)
{
even=even+no2;
}
   
else if(no2%2 !=0 )
{
odd=odd+no2;
}
   
if(no3%2==0)
{
even=even+no3;
}				   
   
else if(no3%2 !=0 )
{
odd=odd+no3;
}
   
 if(no4%2==0)
{
even=even+no4;
}
						   
else if(no4%2 !=0 )
{
odd=odd+no4;
}
   
 if(no5%2==0)
{
even=even+no5;
}
						   
else if(no5%2 !=0 )
{
odd=odd+no5;
}

 if (no6%2 == 0)
{
even=even+no6;	
}

else if (no6%2 != 0)
{
odd=odd+no6;

}

else 
{
	cout<<"Invalid Entry !!";
}
   
   
 cout<<"\n Sum of even numbers is :  "<<even;
   
 cout<<"\n Sum of odd numbers is  :  "<<odd;
 
 cout<<"\n Square of sum of even number is : "<<even*even;
 
 cout<<"\n Square of sum of odd number is :  "<<odd*odd;
   
 cout<<endl;


return 0;
}

