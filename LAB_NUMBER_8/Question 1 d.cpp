#include <iostream>
#include <string>
using namespace std;
string E_O (int);

int main()
{
	int num;
	string EorO;
	
	cout<<"Enter any number here : ";
	cin>>num;
	
	EorO=E_O(num);
	cout<<EorO;

return 0;
}

	string E_O (int num){
		string even_Or_odd;
		if(num%2==0)
		even_Or_odd="Even";
		else if(num%2!=0)
		even_Or_odd="Odd";
		
		return even_Or_odd;
	}


