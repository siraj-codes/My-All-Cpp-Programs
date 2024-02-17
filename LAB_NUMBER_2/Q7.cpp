#include <iostream>
using namespace std;

	int main()
	{
	 double marks1,marks2,marks3,marks4,marks5,obtained,percentage;
	 cout<<"\t\t Mark-Sheet";
	 cout<<endl;
	 cout<<"English:  ";
	 cin>>marks1;
	 cout<<"Ict:  ";
	 cin>>marks2;
	 cout<<"P.S:  ";
	 cin>>marks3;
	 cout<<"Islamiat:  ";
	 cin>>marks4;
	 cout<<"Maths:  ";
	 cin>>marks5;
	 obtained=marks1+marks2+marks3+marks4+marks5;
	 cout<<"Obtained marks is:  "<<obtained;
	 percentage=obtained/500*100;
	 cout<<endl;
	 cout<<"Percentage is:  "<<percentage;
	 return 0;
	}

