#include <iostream>
using namespace std;
int square (int);

int main()
{
	int num,sqt;
	
	cout<<"Enter any number here to see the square of number : ";
	cin>>num;
	
	sqt=square (num);
	cout<<num<<" squared  = "<<sqt;

return 0;
}
	
	int square (int num){
		int sqt=num*num;
		return sqt;
	}


