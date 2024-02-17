#include <iostream>
using namespace std;

int main()
	{
		
		
	 char answer;
	 string dep;
	 
	 cout<<"Do you have a Student ID Card (y/Y or n/N) :  ";
	 cin>>answer;
	 
	 if (answer=='y' || answer=='Y')
	 {
	 	cout<<"CS"<<endl;
	 	cout<<"EE"<<endl;
	 	cout<<"BBA"<<endl;
	 	cout<<"EDU"<<endl;
	 	cout<<"What is your department :  ";
	 	cin>>dep;
	 	
	 	if (dep=="CS")
	 	{
	 	 cout<<"Go to Block 1";	
		}
		
			else if (dep== "EE")
			{
				cout<<"Go to Block 3";
			}
			
				else if (dep == "BBA")
				{
					cout<<"Go to Block 2";
				}
				
					else if (dep == "EDU")
					{
						
						cout<<"Go to Knowledge Center";
					
					}
					
					else
					{
						cout<<"Invalid Department Entry.";
					}
	 }
	 
	 	else if (answer == 'n' || answer == 'N')
		{
			cout<<"You are not allowed to enter !";
		}
		
		else
		{
			cout<<"your answer is not applicable";
		}
		
		
	return 0;

	}

