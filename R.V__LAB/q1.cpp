#include <iostream>
#include <string>
using namespace std;
int inp (int);
char a_p (int);
int main()
{ 
	char ans;
	do{
	
	int h,m,hour;
	char t;
	cout<<"Enter time in hh ";
	cin>>h;
	cout<<"Enter time in mm";
	cin>>m;
	hour=inp (h);
	t=a_p (h);
	
	cout<<hour<<" : "<<m<<" : "<<t;
	
	cout<<"\nDo you wanna continue (y/n):  ";
	cin>>ans;
	
	}while(ans=='y');
return 0;
}	
	
	int inp (int h){
		int hour;
		
		
		if(h>12){
		hour=h-12;
		
		}
		
		else if(h==0){
			return 12;
		}
		
		else{
			hour=h;
		}
		
		
		return hour;
		
		
	}	
	
	char a_p (int h){
		char t;
		
		
		if(h>12 && h<=24)
		{
			 t = 'P';
			
		}
		else{
			t ='A';
		}
		
		return t;
	} 
