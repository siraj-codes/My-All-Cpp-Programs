#include <iostream>
#include <string>
using namespace std;

int words (string);

int main()
{
	int count;
	string sentence;
	cout<<"Enter any Sentence to see the number of words in it : ";
	getline(cin,sentence);
	
	count=words(sentence);
	cout<<"This Sentence has "<<count<<" words ";
	
return 0;
}
	int words (string sentence){
		int count;
		int words=1;
		int t_w;
		count=sentence.length();
		
		for(int i=0 ; i<count ; i++){
			
			if(sentence[i]==32){
				words++;
			}
		}
		
		t_w=words;
		return t_w;
	}
	
