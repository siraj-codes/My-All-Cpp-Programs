#include <iostream>
#include <string>
using namespace std;
string my_lower(string);

int main()
{
	string l_c;
	string sen;
	cout<<"Upper case sen is : ";
	getline(cin,sen);
	l_c=my_lower(sen);
	cout<<"Lower case sen is : "<<l_c;

return 0;
}
	string my_lower(string sen){
		
		for(int i=0;i<=sen.length();i++)
		{
			if(sen[i]>=65 && sen[i]<=90 )
			{
				sen[i]=sen[i]+32;
			}
		}
		return sen;
	}
