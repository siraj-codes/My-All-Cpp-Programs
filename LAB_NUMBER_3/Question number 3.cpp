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
	 
	 if (marks1>100 || marks2>100 || marks3>100 || marks4>100 || marks5>100 )
	 {
	 	cout<<"Invalid marks entry!!";
	 }
	 else
	 {
	 
	 
	 obtained=marks1+marks2+marks3+marks4+marks5;
	 
	 
	 
	 cout<<"Obtained marks is:  "<<obtained;
	  
	 percentage=obtained/500*100;
	 
	 cout<<endl;
	 
	 cout<<"Percentage is:  "<<percentage;
	
	
	if (percentage>=90 && percentage<=100)
 {
 	cout<<"\nYour grade is A1";
 }
 
 else if (percentage>=80 && percentage<90)
 {
 	cout<<"\nYour grade is A";
 }
 
 else if (percentage>=70 && percentage<80)
 {
 	cout<<"\nYour grade is B";
 }
 
 else if (percentage>=60 && percentage<70)
 {
 	cout<<"\nYour grade is C";
 }
 
 else if (percentage >=0 && percentage<60 )
 {
 	cout<<"\nFail!!!!!!!!!!!!";
 }
 
 else 
 {
 	cout<<"\nInvalid Entry!";
 } 
    
	}
	
 return 0;	
 }
 


