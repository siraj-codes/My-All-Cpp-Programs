#include <iostream>
using namespace std;


int main()
{
	int s , i , sea;
	bool check=false;
	
	cout<<"Enter the array range : ";
	cin>>s;
	int array[s];
	for(i=0 ; i<s ; i++){
		cout<<"Enter value "<<i+1<<" :  ";
		cin>>array[i];
	}
	
	
	cout<<"Enter the value you wanna search from this array : ";
	cin>>sea;
	for(i=0 ; i<s ; i++){
		if(sea==array[i]){
		check=true;
		break;}
	}
	if(check==true)
	cout<<array[i]<<" is present at the "<<i+1<<" index ";
	else
	cout<<sea<<"  is not present in this array here ";
	
return 0;	
}


