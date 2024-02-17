#include <iostream>
using namespace std;

	int main()
	{
 	 int a,b,c,d,e,f;
 	 cout<<"Enter any number here : ";
 	 cin>>a;
 	 b=a/10000;//1
 	 c=(a-(b*10000));//2345
 	 int c1=c/1000; //2
 	 d=(c-(c1*1000));//345
	 int d1=d/100;//3
	 e=(d-(d1*100));//45
	 int e1=e/10;//4
	 f=e-(e1*10);//5
 	 cout<<f<<endl;
 	 cout<<e1<<endl;
	 cout<<d1<<endl;
 	 cout<<c1<<endl;
 	 cout<<b<<endl;
 	 return 0;
	}

