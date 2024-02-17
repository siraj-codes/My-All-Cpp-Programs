#include <iostream>
#include <string>
using namespace std;
string my_upper(string);

int main()
{
	string u_c;
	string sen;
	cout<<"Lower case sen is : ";
	getline(cin,sen);
	u_c=my_upper(sen);
	cout<<"Upper case sen is : "<<u_c;

return 0;
}
	string my_upper(string sen){
		
		for(int i=0;i<=sen.length();i++)
		{
			if(sen[i]>=97 && sen[i]<=122 )
			{
				sen[i]=sen[i]-32;
			}
		}
	return sen;
	}

