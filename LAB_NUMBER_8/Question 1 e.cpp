#include <iostream>
using namespace std;
double perc (int,double);
int main()
{
	int Total_marks=500;
	double p,Obtained_marks;
	
	cout<<"Enter you obtained marks here : ";
	cin>>Obtained_marks;
	
	p = perc (Total_marks,Obtained_marks);
	cout<<"percentage is :"<<p;

return 0;
}
	
	double perc (int Total_marks,double Obtained_marks){
		double p;
		p=(Obtained_marks/Total_marks)*100;
		return p;
	}



