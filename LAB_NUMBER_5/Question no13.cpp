#include <iostream>
using namespace std;



int main()
{
	cout<<"\t\t\t\t Welcome to number guessing program\n";
	cout<<"\n You have five guesses to guess the number between (1-100) Other wise the number will be shown";
	cout<<endl<<endl;
	
	int O_no=93 , G_no , guesses=1;
	cout<<"Guess a number between (1-100) to see the original number  :  ";
	cin>>G_no;
	
	while(G_no!=O_no && guesses<5)
	{
		if(G_no<O_no)
		{
			cout<<"\n entered number is smaller than the actual number"<<endl<<endl;
			cout<<"Guess a number between (1-100) to see the original number  :  ";
			cin>>G_no;
			guesses++;
		}
		
		if(G_no>O_no)
		{
			cout<<"\n entered number is larger than the actual number"<<endl<<endl;
			cout<<"Guess a number between (1-100) to see the original number  :  ";
			cin>>G_no;
			guesses++;
		}
	}
	
	if(guesses>=5)
	{
		cout<<"\n Sorry "<<" The right number was : "<<O_no;	
	}
	
	if(G_no==O_no)
	{
		cout<<"\nCongrats! You Get it.";
		
	}
	
return 0;
}





