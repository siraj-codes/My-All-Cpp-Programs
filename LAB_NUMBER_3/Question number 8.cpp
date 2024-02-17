#include <iostream>
using namespace std;

int main()
{
 int num1,num2,num3;
 
 cout<<"\t Enter the first number  here : ";
 cin>>num1;
 cout<<endl;
 
 cout<<"\t Enter the second number here : ";
 cin>>num2;
 cout<<endl;
 
 cout<<"\t Enter the third number  here : ";
 cin>>num3;
 cout<<endl;
 
 if(num2>num1 && num2>num3 )
 {
 	cout<<endl;
 	cout<<"\t The second number is the greatest here ";
 }
 
 else if(num1>num2 && num1>num3)
 {
 	cout<<endl;
 	cout<<"\t The first number is the greatest here ";
 }
 
 
 else if(num3>num2 && num3>num1)
 {
 	cout<<endl;
 	cout<<"\t The third number is the greatest here ";
 }
 
 

return 0;
}

