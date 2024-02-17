#include <iostream>
using namespace std;

int main()
{
	
	int a , b, *pointer_a ,*pointer_b ;
	
	 pointer_a=&a;
	 pointer_b=&b;
	
	 
	 cout<<"\n\t Enter the value to see wheather they are equal or not \n\n\n ";
	 
	 cout<<"Enter value number 1 here : ";
	 cin>>*pointer_a;
	 cout<<"Enter value number 2 here : ";
	 cin>>*pointer_b;
	 
	 
	 
	
	 
	 if(*pointer_a==*pointer_b){
	 	
	 	cout<<"\t\n\nBoth the value are equal  the pointer is saying :) ";
	 }
	 
	else if(*pointer_a!=*pointer_b){
	 	
	 	cout<<"\t\n\nBoth the value not equal the pointer is saying :( ";
	 }


	cout<<endl<<endl<<endl;

return 0;
}

