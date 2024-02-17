#include <iostream>
using namespace std;
double perc (int,double);
char grade (double);
int main()
{
	
	int Total_marks=500;
	double p,Obtained_marks;
	char gr;
	
	cout<<"Enter you obtained marks here : ";
	cin>>Obtained_marks;
	
	p = perc (Total_marks,Obtained_marks);
	cout<<"percentage is :"<<p;
	
	gr= grade (p);
	cout<<"\nyour grade is : "<<gr;
	
return 0;
}
	double perc (int Total_marks,double Obtained_marks){
		double p;
		p=(Obtained_marks/Total_marks)*100;
		return p;
	}

	char grade (double per){
		char gr;
		if(per>=80&&per<=100)
		gr='A';
		else if(per>=70&&per<80)
		gr='B';
		else if (per>=60&&per<70)
		gr='C';
		else if(per>=0&&per<60)
		gr='F';
		
		return gr ;
	}

