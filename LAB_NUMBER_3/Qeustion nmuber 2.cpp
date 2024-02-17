#include <iostream>
using namespace std;

	int main()
	{
 	 int percentage;
 	 string grade;
 	 cout<<"Enter your Percentage : ";
 	 cin>>percentage;
 
 	 if (percentage>=90 && percentage<=100)
 	 {
 	  cout<<"Your grade is A1";
 	 }
 
 	 else if (percentage>=80 && percentage<90)
 	 {
 	 cout<<"Your grade is A";
 	 }
 	 else if (percentage>=70 && percentage<80)
 	 {
 	  cout<<"Your grade is B";
 	 }
 	 else if (percentage>=60 && percentage<70)
 	 {
 	  cout<<"Your grade is C";
	 }
 	 else if (percentage >=0 && percentage<60 )
     { 
 	  cout<<"Fail!!!!!!!!!!!!";
 	 }
 	 else 
 	 {
 	  cout<<"Invalid Entry!";
 	 }
 	 return 0;
	}

	