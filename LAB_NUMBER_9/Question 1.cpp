#include <iostream>
using namespace std;

int main()
{
	string date;
	cout<<"Enter Date in the format of DD/MM/YYYY : ";
	getline(cin,date);
	cout<<"Date is   : "<<date[0]<<date[1]<<endl;
	cout<<"Month is  : "<<date[3]<<date[4]<<endl;
	cout<<"Year is   : "<<date[6]<<date[7]<<date[8]<<date[9];
return 0;
}
