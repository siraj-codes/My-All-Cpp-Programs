#include <iostream>
using namespace std;
int sumr (int);

int main()
{
	int sum;
	int range ;
	cout<<"Enter range to see the sum here : ";
	cin>>range;
	
	sum= sumr (range);
	cout<<"Sum of all "<<range<<" positive integers is "<<sum;

return 0;
}

	int sumr (int range){
		int sum=0,t;
		if(range>=0){
			
		for(int i=0 ; i<=range ;i++){
		sum+=i;
		}
		
		}
		
		t=sum;
		return t;
	}
	
	


