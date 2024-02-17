#include <iostream>
using namespace std;

int main()
{
 int id;	
 double Unit_cons,priceA,priceB,priceC,priceD;
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
 priceB=(10* (Unit_cons-199) +(5*199));   
 priceC=(15* (Unit_cons-399) +(10*200)+(5*199)); 
 priceD=(20* (Unit_cons-599) +(20*300)+(10*200)+(5*199));
 
 if(Unit_cons>0 && Unit_cons<=199)
 {
 	cout<<"\tYour Bill is: "<<priceA  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
 	cout<<endl;
 }
 
 else if(Unit_cons>199 && Unit_cons<=399)
 {
 	cout<<"\tYour Bill is: "<<priceB  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
 	cout<<endl;
 }
 
 else if(Unit_cons>399 && Unit_cons<=599)
 {
 	cout<<"\tYour Bill is: "<<priceC  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
 	cout<<endl;
 }
 
 else if(Unit_cons>599)
 {
 	cout<<"\tYour Bill is: "<<priceD  <<"pkr"<<"  for  "<< Unit_cons <<"Units";
 	cout<<endl;
 }
 
 else 
    {
    cout<<"\t Invalid-entry";
	cout<<endl;	
    }
 
return 0;
}

