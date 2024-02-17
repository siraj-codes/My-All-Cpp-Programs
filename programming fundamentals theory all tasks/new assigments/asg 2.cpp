#include<iostream>
#include<string>
using namespace std;
int main()
{
	string sent;
	int len,numofwords,numofsents=0,numofsmallletters,numofcapitaletters,numofsc;
	cout<<"\nEnter any value : ";
	getline(cin,sent);

	len=sent.length();	
	for(int i=0;i<len;i++)
	{
		if(sent[i]==' ')
		{
			numofwords++;
		}
	}
	cout<<"\nTotal Words : "<<numofwords+1;
	
	for(int i=0;i<len;i++)
	{
		if(sent[i]=='.')
		{
			numofsents++;
		}
	}
	cout<<"\nNumber of sentences : "<<numofsents;
	
	for(int i=0;i<len;i++)
	{
		if(sent[i]>='a' && sent[i]<='z' )
		{
			numofsmallletters++;
		}
	}	
  	cout<<"\nNumber of small letters : "<<numofsmallletters;

	for(int i=0;i<len;i++)
	{
		if(sent[i]>='A' && sent[i]<='Z')
		{
			numofcapitaletters++;
		}
	}	
  	cout<<"\nNumber of Capital letters : "<<numofcapitaletters;
  	
  	for(int i=0;i<len;i++)
  	{
    	if(sent[i]=='!' || sent[i]=='@' || sent[i]=='#' || sent[i]=='$' || sent[i]=='%' || sent[i]=='^' || sent[i]=='&' || sent[i]=='*' || sent[i]=='(' || sent[i]==')')
    	numofsc++;
	}
	cout<<"\nNumber of Special Charaters : "<<numofsc;
return 0;
}

