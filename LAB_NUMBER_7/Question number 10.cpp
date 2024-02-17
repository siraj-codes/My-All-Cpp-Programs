#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i , student_no=0;
	
	cout<<"Enter number of students here : ";
	cin>>student_no;
	
	string student_name[student_no];
	int  programming[student_no];
	int  maths[student_no];
	int  english[student_no];
	int  ps[student_no];
	float  obtained , percentage;
	char grade;
	
	for( i=0 ; i<student_no ;i++){
		cout<<"Enter student "<<i+1<<" name here : ";
		cin>>student_name[i];
		cout<<"Enter student "<<i+1<<" marks for programming fundamentals here : ";
		cin>>programming[i];
		cout<<"Enter student "<<i+1<<" marks for maths here : ";
		cin>>maths[i];
		cout<<"Enter student "<<i+1<<" marks for english here : ";
		cin>>english[i];
		cout<<"Enter student "<<i+1<<" marks for ps here : ";
		cin>>ps[i];
		cout<<endl;
	}
	cout<<endl<<endl;
	
	
	
	for( i=0 ; i<student_no ;i++){
		obtained=programming[i]+maths[i]+english[i]+ps[i];
		percentage=(obtained/400)*100;
		if(percentage>=80&&percentage<=100){
			grade='A';
		}
		if(percentage>=70&&percentage<=79){
			grade='B';
		}
		if(percentage>=60&&percentage<=69){
			grade='C';
		}
		if(percentage>=0&&percentage<60){
			grade='F';
		}
		cout<<student_name[i]<<"\t"<< programming[i]<<"\t"<<maths[i]<<"\t"<<english[i]<<"\t"<<ps[i]<<"\t"<<obtained<<"\t"<<percentage<<"\t"<<grade<<endl;
	}
	
	
	


return 0;
}


