	#include <iostream>
	#include <string>
	using namespace std;
	
	int main()
	{
		int id;	
		 double Unit_cons,priceA,priceB,priceC,priceD,Tax1,Tax2;
		 string Name;
		 
		 cout<<"\t\t\t\t Electircity bill    ";
		 cout<<endl<<endl<<endl;
		 
		 cout<<"\tWrite your name:           ";
		 cin>>Name;
		 cout<<endl;
		 
		 cout<<"\tWrite your id num:         ";
		 cin>>id;
		 cout<<endl;
		 
		 cout<<"\tWrite your unit consumed:  ";
		 cin>>Unit_cons;
		 cout<<endl;
		 
		 priceA=5*Unit_cons;
		 priceB=(7* (Unit_cons-100)) +(5*100);
		 priceC=(15* (Unit_cons-200)) +(7*200);
		 priceD=(50* (Unit_cons-300)) +(15*300);
		 
		 Tax1=priceC/100*15;			 
		 Tax2=priceD/100*15;
		 
		  if(Unit_cons>0 && Unit_cons<=100)
	  {
	 	cout<<"\tYour Bill is: "<<priceA  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	cout<<endl;
	  }
	  
	 
	 else if(Unit_cons>100 && Unit_cons<=200)
	       {
	 	   cout<<"\tYour Bill is: "<<priceB  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	   cout<<endl; 
	       }
	       
	  
	else if(Unit_cons>200 && Unit_cons<=300)
	      {
	 	  cout<<"\tYour Bill is: "<<priceC  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	  cout<<endl;
	      }
		   
	
	else if(Unit_cons>300)
	      {
	 	  cout<<"\tYour Bill is: "<<priceD  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	  cout<<endl;
	      }
	      
	
	else 
	    {
	    cout<<"\t Invalid-entry";
		cout<<endl;	
	    }
		 
	if(Unit_cons>240 && Unit_cons<=300)
	 {
	 	cout<<"\n\tGST Tax is:  "<<Tax1<<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	cout<<endl;
	 
	 }
	 
	 else if(Unit_cons>300 )
	 {
	 	cout<<"\n\tGST Tax is:  "<<Tax2<<"pkr"<<"  for  "<< Unit_cons <<"Units";
	 	cout<<endl;
	 	
     }
	 	 
		 
	
	return 0;
	}

