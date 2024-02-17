#include<iostream>
using namespace std;
struct shop
{
	int sid;
	string sname;
	string sadd;
	string scity;
};
int main()
{
	shop s[2];
	int ans;
	char opt;
	string searchsname,searchcname;
	bool check=false;
	for(int i=0;i<2;i++)
	{
			cout<<"\nEnter Shop "<<i+1<<" ID : ";
			cin>>s[i].sid;
			cout<<"\nEnter Shop "<<i+1<<" Name : ";
			cin>>s[i].sname; 
			cout<<"\nEnter Shop "<<i+1<<" Address : ";
			cin>>s[i].sadd; 
			cout<<"\nEnter Shop "<<i+1<<" City : ";
			cin>>s[i].scity; 
	}
	
	do
	{
		cout<<"\nPress 1 to search by shop name : ";
		cout<<"\nPress 2 to search by shop city : ";
		cin>>ans;
		
		switch(ans)
		{
			case 1:
				{
					cout<<"\nEnter Shop Name : ";
					cin>>searchsname;
					for(int i=0;i<2;i++)
					{
						if(searchsname==s[i].sname)
						{
							cout<<"\nShop "<<i+1<<" ID : "<<s[i].sid;
							cout<<"\nShop "<<i+1<<" Name : "<<s[i].sname; 
							cout<<"\nShop "<<i+1<<" Address : "<<s[i].sadd; 
							cout<<"\nShop "<<i+1<<" City : "<<s[i].scity;
							check=true; 
						}
					}
				if(!check)
				{
				 cout<<"\nShop Not Found";	
				}	
				}break;
			case 2:
				{
					cout<<"\nEnter Shop City : ";
					cin>>searchcname;
					for(int i=0;i<2;i++)
					{
						if(searchcname==s[i].scity)
						{
							cout<<"\nShop "<<i+1<<" ID : "<<s[i].sid;
							cout<<"\nShop "<<i+1<<" Name : "<<s[i].sname; 
							cout<<"\nShop "<<i+1<<" Address : "<<s[i].sadd; 
							cout<<"\nShop "<<i+1<<" City : "<<s[i].scity;
							check=true; 
						}
					}
				if(!check)
				{
				 cout<<"\nShop Not Found";	
				}
					
				}break;
			default:
			cout<<"\nInvalid";		
		}
	cout<<"\nDo you want to continue(y/n) : ";
	cin>>opt;	
	}while(opt=='y');
	
return 0;
}

