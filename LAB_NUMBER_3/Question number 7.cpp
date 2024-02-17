#include <iostream>
using namespace std;

int main()
{
 int num1,num2;
 
 cout<<"\t Enter number 1 here :	";
 cin>>num1;
 
 cout<<"\t Enter number 2 here :	";
 cin>>num2;
 
 if(num1>num2)
 {
 	cout<<"\t Number 1 is greater to Number 2";
 }
 
 else if(num2>num1)
 {
 	cout<<"\t Number 2 is greater to Number 1";	
 }
 
 else if ( num1==num2)
 {
 	cout<<"\t Both the numbers are equal";	
 }
 
 else
 {
 	cout<<"Invalid Entry!!!!";
 }

return 0;
}

