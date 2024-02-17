#include <iostream>
using namespace std;

int main()
{
 int number ;
 
 cout<<"Enter any number here :  ";
 cin>>number;
 cout<<endl;
 
 if(number%2 == 0)
 {
 	cout<<number<<" is a even number ";
 }
 
 else if(number%2 != 0)
 {
 	cout<<number<<" is a odd number ";
 }
 
 else
 {
 	cout<<"INVALID ENTRY!!";
 }

return 0;
}



