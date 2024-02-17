#include <iostream>
using namespace std;

int main()
{
	int chm  , cwm ;
	cout<<"Enter current time in hours and min here : ";
	cin>>chm;
	
	cout<<"Enter waiting time in hours and min here : ";
	cin>>cwm;
	if(chm>1200||cwm>1200){
		chm=chm-12;
		cwm=cwm-12;
	}
	if(chm%100+cwm%100>60){

		cout<<"New time is : "<<(chm/100+cwm/100)+1 <<" hours "<< " : "<<(chm%100+cwm%100)-60<< " min ";
	}
	else{
		cout<<"New time is : "<<chm/100+cwm/100 <<" hours "<< " : "<<chm%100+cwm%100<< " min "; 
	}
	
	
	
return 0;
}

