#include <iostream>
using namespace std;

int main()
{
	int input ;
	char option;
	 
	do
	{
	 
	 
	 cout<<"\t\t Welcome.......";
	 cout<<endl<<endl;
	 
	 cout<<"Press No:-1 for Calculator program"<<endl;
	 
	 cout<<"\nPress No:-2 for Mark-sheet program"<<endl;
	 
	 cout<<"\nPress No:- 3 for Gender program"<<endl;
	 
	 cin>>input;
	 
	 cout<<endl<<endl;
	 
	 
	 switch(input)
	 {
	 	case 1:
	 		
		{
			 	 
	 		cout<<"\t Welcome to Calculator Program.."<<endl;
	 	 	int number1 , number2;
	 	 	char op;
	 	 	
	 	 	cout<<"\n Type first number here";
	 	 	cin>>number1;
	 	 	
	 	 	cout<<endl;
	 	 	
	 	 	cout<<"Type Second number here";
			cin>>number2; 
			
			cout<<endl;
	 	 
	 	   	cout<<"Select any operator (+,-,/,*)";
	 	   	cin>>op;
	 	   	
	 	   	switch(op)
	 	   	{
	 	   	    case '+':
			 	cout<<endl<<"Sum is : "<<number1+number2;
				break;
				
				case '-':
			 	cout<<endl<<"Sub is : "<<number1-number2;
				break; 
				
				case '/':
			 	cout<<endl<<"Div is : "<<number1/number2;
				break;
				
				case '*':
			 	cout<<endl<<"Multiplication  is : "<<number1*number2;
				break;
				
				default:
				cout<<"Invalid Operator!!!!!!";	 	
			}
			
			break;
	    }
	
	 	case 2:
	 	
		 {
			 	
			 
	 	 	int marks1,marks2,marks3,obtained,percentage;
		 	string name , grade , institute;
		 	
		 	cout<<"\t Welcome to the  mark-sheet program......";
		 	cout<<endl;
		 	
		 	cout<<"Enter your Name Here :  ";
		 	cin>>name;
		 	cout<<endl;
		 	
		 	cout<<"Enter your institute Name Here : ";
		 	cin>>institute;
		 	cout<<endl;
		 	
		 	cout<<endl<<"Enter English marks : ";
		 	cin>>marks1;
		 	cout<<endl;
		 	
		 	cout<<endl<<"Enter Ict  marks : ";
		 	cin>>marks2;
		 	cout<<endl;
		  	
	 	    cout<<endl<<"Enter Maths marks : ";
	 	    cin>>marks3;
		 	cout<<endl;
		 	
		 	cout<<"\t Mark-Sheet.....";
		 	cout<<endl;
		 	
		 	cout<<"___________________________________________"<<endl;
		 	
		 	cout<<"Name :  "<<name;
		 	cout<<endl<<endl;
		 	
		 	cout<<"Institute :  "<<institute;
		 	cout<<endl<<endl;
		 	
		 	cout<<"English :  "<<marks1;
		 	cout<<endl<<endl;
		 	
		 	cout<<"Ict :  "<<marks2;
		 	cout<<endl<<endl;
		 	
		 	cout<<"Maths : "<<marks3;
		 	cout<<endl<<endl;
		 	
		 	obtained=marks1+marks2+marks3;
		 	cout<<"Obtained Marks is : "<<obtained<<"  Out of 300";
		 	cout<<endl<<endl;
	 	
	 	    percentage=(obtained*100)/300;
	 	    cout<<"Percentage is : "<<percentage<<"  Out of 100";
	 	    cout<<endl<<endl;
	 	    
	 	    
	 	    if(percentage>=80 && percentage<=100)
	 	    {
			 cout<<endl<<"Your Grade is A+"; 
			}
	 	
	 	    else if (percentage>=70 && percentage<80)
	 	    {
	 	     cout<<endl<<"Your Grade is A";	
			}
	 	
	 	    else if (percentage>=60 && percentage<70)
	 	    {
			 cout<<endl<<"Your Grade is B"; 
			}
	 	
	 	   else if (percentage>=50 && percentage<60)
	 	    {
	 	     cout<<endl<<"Your Grade is C";	
			}
			
		   else if (percentage<50)
		   {
		    cout<<endl<<"Fail!!!!!!!!!!!!!";	
		   }
		   
		   else 
		   {
		    cout<<endl<<"Invalid Entry ";
				
		   }
		   
		   break;
	   }
		    
	    case 3:	
	    
		{
		
	 		char gender;
	 		
	 	    cout<<"\t Welcome to gender program :  ";
	 	    cout<<endl;
	 	    
	 	    cout<<"Enter your gender here (m / M / f / F)";
	 	    cin>>gender;
	 	    cout<<endl;
	 	    
	 	    if(gender=='m' || gender=='M')
	 	    {
	 	    	cout<<"Your Gender is : Male";
	 	    	cout<<endl;
			}
	 	
	 	   else if (gender=='f' || gender=='F')
	 	   {
	 	        cout<<"Your Gender is : Female";
				cout<<endl;	
		   }
	 	   
	 	   else 
	 	   {
	 	      cout<<"\n Invalid enntry ";
			  	
		   }
		   
		   break;
	   }
	   
	   default :
	   	
	   	cout<<"INVALID ENTRY!!!!!!!!!!!";
	   
	   
	 }
	 
	 cout<<endl<<"Do you want to continue ?(y/n)";
	 cin>>option;
	 
	}while(option=='y');
	   
	 

return 0;
}

