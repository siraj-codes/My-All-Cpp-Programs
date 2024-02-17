#include <iostream>
using namespace std;
int printTable (int);
int printTable (int,int);
int main()
{
	int t_n,r;
	cout<<"Enter any number to prints its table : ";
	cin>>t_n;
	
	printTable ( t_n);
	cout<<endl;
	
	cout<<"Enter any number to prints its table : ";
	cin>>t_n;
	cout<<"Enter the final range value : ";
	cin>>r;
	printTable ( t_n,r);

return 0;
}
	int printTable (int t_n){
		for(int i=1 ; i<=10 ;i++){
			cout<<t_n<<" x "<<i<<" = "<<t_n*i<<endl;
		}
	}
	
	int printTable (int t_n,int r){
		for(int i=1 ; i<=r ;i++){
			cout<<t_n<<" x "<<i<<" = "<<t_n*i<<endl;
		}
	}

