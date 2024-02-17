#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sent;
    int countwords = 1, countvols=0;
    cout << "Enter anything: ";
    getline(cin, sent);
    int len = sent.length();
    for (int i = 0; i < len; i++) 
	{
         if (sent[i] == ' ') 
			{
            countwords++;
        	}
         if (sent[i] == 'a' || sent[i] == 'A' || sent[i] == 'e' || sent[i] == 'E' 
		         || sent[i] == 'i' || sent[i] == 'I' || sent[i] == 'o' || sent[i] =='O' ||
				 sent[i] == 'u' || sent[i] == 'U') 
			{
		 	countvols++;
			 }    
    }

    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "User Input: " << sent << endl;
        outputFile << "Count of Words: " << countwords << endl;
        outputFile << "Count of Vowels Characters: " << countvols << endl;
        outputFile.close();
        cout << "Output has been saved to output.txt" << endl;
    }
    else {
        cout << "Unable to create/open the output file." << endl;
    }

    return 0;
}

