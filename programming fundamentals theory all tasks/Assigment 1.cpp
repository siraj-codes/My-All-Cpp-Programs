#include <iostream>
using namespace std;

int main()
{
 	int English_Marks,Pakstudies_Marks,Islamiat_Marks,Chemistry_Marks,Biology_Marks,Physics_Marks,obtained,percentage;
 	
	cout<<"Enter English Marks Here : ";
	cin>>English_Marks;
	
 	
 	cout<<"Enter Pakistan-Studies Marks Here : ";
	cin>>Pakstudies_Marks;
	
	
	cout<<"Enter Islamiat Marks Here  : ";
	cin>>Islamiat_Marks;
	
	
	cout<<"Enter Chemistry Marks Here : ";
	cin>>Chemistry_Marks;
	
	
	cout<<"Enter Physics Marks Here   : ";
	cin>>Physics_Marks;
	
	
	cout<<"Enter Biology Marks Here   : ";
	cin>>Biology_Marks;
	
	if(English_Marks>100||English_Marks<0 || Pakstudies_Marks>100||Pakstudies_Marks<0 || Islamiat_Marks>100||Islamiat_Marks<0 || Chemistry_Marks>100||Chemistry_Marks<0 || Physics_Marks>100||Physics_Marks<0 || Biology_Marks>100||Biology_Marks<0 )
	{
		cout<<endl<<"Marks input is incorrect!!!";	
	}
	
	else
	{
	cout<<"\t\t\t\t Mark-Sheet."<<endl;
	
	cout<<"\t English : "<<English_Marks<<" Out of 100 "<<endl;
	cout<<"\t Pakistan-Studies : "<<Pakstudies_Marks<<" Out of 100 "<<endl;
	cout<<"\t Islamiat : "<<Islamiat_Marks<<" Out of 100 "<<endl;
	cout<<"\t Chemistry : "<<Chemistry_Marks<<" Out of 100 "<<endl;
	cout<<"\t Physics : "<<Physics_Marks<<" Out of 100 "<<endl;
	cout<<"\t Biology : "<<Biology_Marks<<" Out of 100 "<<endl;
	
	
	obtained=English_Marks+Islamiat_Marks+Pakstudies_Marks+Chemistry_Marks+Physics_Marks+Biology_Marks;
	cout<<"\nObtained Marks is :  "<<obtained;
	
	percentage=(obtained*100)/600;
	cout<<"\nPercentage is : "<<percentage<<" Out of 100 ";
	
	if(percentage>=80 && percentage<=100)
	{
		cout<<"\nYour Grade is A";
	}
	
	else if (percentage>=70 && percentage<80)
	{
		cout<<"\nYour Grade is B";
	}
	
	else if (percentage>=60 && percentage<70)
	{
		cout<<"\nYour Grade is C";
	}
	
	else if (percentage>=50 && percentage<60)
	{
		cout<<"\nYour Grade is D";
	}
	
	else if (percentage<50)
	{
		cout<<"\nFail!!";
	}
	
	
	
	
 	}	
	
	
	
return 0;
}

