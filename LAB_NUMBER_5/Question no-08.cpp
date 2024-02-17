#include <iostream>
using namespace std;

int main()
{
	int num , a=0 , b=0 , c=0 ;
	int priceA=0 , priceB=0 , priceC=0 ,quanA=0 , quanB=0 , quanC=0 ;
	string name;
	cout<<"Agar ap ko 10000 sa upper shopping karnee ha tu name likha warna bee likna para ga :  ";
	cin>>name;
	cout<<"1.Books (per item = 500)";
	cout<<endl;
	cout<<"2.T-Shirt (per item = 700)";
	cout<<endl;
	cout<<"3. Shoes (per pair = 1000)";
	cout<<endl;
	cout<<"0. Exit the program";
	cout<<endl;
	cout<<"Enter any number to select any product to buy or 0 to exit : ";
	cin>>num;
	
	while(num>0 && num <= 3)
	{
		
	
	if(num==1)
	{
		cout<<"You have selected books  ";
		cout<<"\n Enter Quantity : ";
		cin>>a; // 4 //5 //25
		cout<<endl<<endl;
		quanA+=a; //4 //9 // 34
		priceA=quanA*(500);
		cout<<"1.Books (per item = 500)";
		cout<<endl;
		cout<<"2.T-Shirt (per item = 700)";
		cout<<endl;
		cout<<"3. Shoes (per pair = 1000)";
		cout<<endl;
		cout<<"0. Exit the program";
		cout<<endl;
		cout<<"Enter any number to select any product to buy or 0 to exit : ";
		cin>>num;
	
		
	}
	
	if(num==2)
	{
		cout<<"You have selected T-Shirt ";
		cout<<"\n Enter Quantity : ";
		cin>>b;
		cout<<endl<<endl;
		quanB+=b;
		priceB=quanB*(700);
		cout<<"1.Books (per item = 500)";
		cout<<endl;
		cout<<"2.T-Shirt (per item = 700)";
		cout<<endl;
		cout<<"3. Shoes (per pair = 1000)";
		cout<<endl;
		cout<<"0. Exit the program";
		cout<<endl;
		cout<<"Enter any number to select any product to buy or 0 to exit : ";
		cin>>num;
	
	}
	
	if(num==3)
	{
		cout<<"You have selected Shoes ";
		cout<<"\n Enter Quantity : ";
		cin>>c;
		cout<<endl<<endl;
		quanC+=c;
		priceC=quanC*(1000);
		cout<<"1.Books (per item = 500)";
		cout<<endl;
		cout<<"2.T-Shirt (per item = 700)";
		cout<<endl;
		cout<<"3. Shoes (per pair = 1000)";
		cout<<endl;
		cout<<"0. Exit the program";
		cout<<endl;
		cout<<"Enter any number to select any product to buy or 0 to exit : ";
		cin>>num;
	
	}
	

	
	}
	
	if(num<0)
	{
		cout<<endl<<"Invalid entry!!";
	}
	
	int Total=priceA+priceB+priceC ;	
	if(Total>=0&&Total<10000){
	
	cout<<endl<<"You have bought "<< quanA << " Books "<<" (Price "<<priceA<<")";
	cout<<endl<<"You have bought "<< quanB << " T-shirts "<<"(Price "<<priceB<<")";
	cout<<endl<<"You have bought "<< quanC << " Shoes "<<"(Price "<<priceC<<")";
	cout<<endl<<" Total "<<" = "<<Total;
	
	}	

	if(Total>=10000)
	{
		cout<<endl<<"You have bought "<< quanA << " Books "<<" (Price "<<priceA<<")";
		cout<<endl<<"You have bought "<< quanB << " T-shirts "<<"(Price "<<priceB<<")";
		cout<<endl<<"You have bought "<< quanC << " Shoes "<<"(Price "<<priceC<<")";
		int discounted_price=Total-((Total/100)*30);
		cout<<endl<<" Total "<<" = "<<discounted_price<<" on  "<<Total;
		cout<<endl<<"Wow "<<name<<" you got 30% discount ..";
		
	}

return 0;
}



