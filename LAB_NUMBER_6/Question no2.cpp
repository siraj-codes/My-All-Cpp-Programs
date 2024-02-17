#include <iostream>
using namespace std;

int main()
{
	double num,score ;
	
	cout<<"For how many students do you have scores ? ";
	cin>>num;
	cout<<"\n How many test scores does each students have ? ";
	cin>>score;
	
	for(int i=1;i<=num;i++)
	{
		cout<<endl;
		double marks;
		double marks2=0; 
		
	
		for (int j=1;j<=score;j++)
		{
			
	
			cout<<"\n Enter score  "<< j << " for student no "<<i<<" : ";	
			cin>>marks;
			marks2+=marks;
				
		}
			
		cout<<"\n The average score for student "<< i<<" is "<<marks2/score<<endl;
		
	}
return 0;
}


