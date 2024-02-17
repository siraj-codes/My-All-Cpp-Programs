#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string rev;
    cout<<"Is this word a Palandrome ?? >>  ";
    cin>>word;
    
    for(int i=word.length()-1;i>=0;i--){
    	rev+=word[i];
	}
	
	if(rev!=word){
		cout<<"This word is not a Palandrome ";
	}
	else{
		cout<<"This word is a Palandrome";
	}
}
	
	
	


