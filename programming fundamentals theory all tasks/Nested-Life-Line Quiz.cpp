#include <iostream>
using namespace std;

int main()
{
int score=0 , lifeline=0;
 char ans;
 
 cout<<"\t Quiz Game";
 
 cout<<endl;
 
 cout<<"\tAnswer Can only be given in form of (A,B,C).";
 
 cout<<endl;
 
	 cout<<"Question no:-1"<<endl;
	 cout<<"What is 4*2 ?";
	 cout<<"\nA 1";
	 cout<<"\nB 2";
	 cout<<"\nC 8";
	 cout<<endl;
	 cin>>ans;
	 
	 if(ans=='C')
	 {
	 	score+=10;
	 }
	 
	 else
	 {
	 	lifeline=lifeline+1;
	 	cout<<" \n Lifeline "<<lifeline;
	 	cout<<" \n score is : "<<score;
	 	cout<<endl;
	 }
	 
	 cout<<"Question no:-2"<<endl;
	 cout<<"What is 4*4 ?";
	 cout<<"\nA 1";
	 cout<<"\nB 16";
	 cout<<"\nC 8";
	 cout<<endl;
	 cin>>ans;

	if(ans=='B')
	 {
	 	score+=10;
	 }
	 
	 else
	 {
	 	lifeline=lifeline+1;
	 	cout<<" \n Lifeline "<<lifeline;
	 	cout<<"\n score is : "<<score;
	 	cout<<endl;
	 }
	 
	 cout<<"Question no:-3"<<endl;
	 cout<<"What is 3*4 ?";
	 cout<<"\nA 12";
	 cout<<"\nB 16";
	 cout<<"\nC 8";
	 cout<<endl;
	 cin>>ans;

	if(ans=='A')
	 {
	 	score+=10;
	 }
	 
	 else
	 {
	 	lifeline=lifeline+1;
	 	cout<<" \n Lifeline "<<lifeline;
	 	cout<<"\n score is : "<<score;
	 	cout<<endl;
	 }
	 
	 if(lifeline<3)
	 {
	 	
		 cout<<"Question no:-4"<<endl;
		 cout<<"What is 5*4 ?";
		 cout<<"\nA 12";
		 cout<<"\nB 16";
		 cout<<"\nC 20";
		 cout<<endl;
		 cin>>ans;
		 
		 if(ans=='C')
		 {
		 	score+=10;
		 }
		 
		 else 
		 {
		 	lifeline=lifeline+1;
			cout<<" \n Lifeline "<<lifeline;
	 		cout<<"\n score is : "<<score;
	 		cout<<endl;
		 }
		 
		 
			 if(lifeline<3)
			{
				  
				  cout<<"Question no:-5"<<endl;
				  cout<<"What is 5*5 ?";
				  cout<<"\nA 25";
				  cout<<"\nB 16";
				  cout<<"\nC 20";
				  cout<<endl;
				  cin>>ans;
				  
				  if(ans=='C')
				 {
				 	score+=10;
				 }
				 
				 else 
				 {
				 	lifeline=lifeline+1;
				 	cout<<" \n Lifeline "<<lifeline;
	 				cout<<"\n score is : "<<score;
	 				cout<<endl;
			     }
			 
	 			if (lifeline<3)
	 			{
	 				cout<<"Question no:-6"<<endl;
				  	cout<<"What is 5*3?";
				  	cout<<"\nA 25";
				  	cout<<"\nB 15";
				  	cout<<"\nC 20";
				  	cout<<endl;
				  	cin>>ans;
				  	
				  	
		 			 if(ans=='B')
					 {
					 	score+=10;
					 }
					 
					 else 
					 {
					 	lifeline=lifeline+1;
					 	cout<<" \n Lifeline "<<lifeline;
	 					cout<<"\n score is : "<<score;
	 					cout<<endl;
				     }	
		 				
			 	
	 
 	        	}   
		 	}
		 	
	if(lifeline<3)
	{
	
	cout<<"You Won";		 	 	
	cout<<"\nScore is "<<score;	 
	cout<<"\nLife-line"<<lifeline;	
	 
	}
	
	 
 	
  }
  return 0;
  
 }

