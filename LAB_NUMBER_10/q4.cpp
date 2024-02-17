#include<iostream>
#include<string>
using namespace std;

void rev_word (string *word){
	
	
	
	
	for(int i = (*word).length() ; i>=0 ; i--){
		
		cout<<(*word)[i];
		
	}
}
int main(){
	
	string word1 ;
	cout<<"Enter any word or sentence to see it's reversed version : ";
	getline(cin,word1);
	
	 rev_word (&word1);
	
	return 0;
}


