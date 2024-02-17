#include <iostream>
using namespace std;

int main()
{
 int num ;
 cout<<"Enter any number here ";
 cin>>num ;
 cout<<endl;
 
 if(num > 0)
 {
 cout<<num<<"  is a +ve number";	
 }
 
 
 else if(num < 0 )
 {
 cout<<num<<" is a -ve number";	
 }
 
 
 else if (num==0)
 {
 cout<<num<<"  is Zero";
 }

return 0;
}

