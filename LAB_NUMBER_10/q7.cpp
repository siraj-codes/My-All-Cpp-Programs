#include <iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int num1=10 , num2=20;
	cout<<"\n\t Numbers Before Swap .\n";
	cout<<"\t";
	cout<<num1<<"  "<<num2;
	cout<<endl;
	swap(&num1,&num2);
	cout<<"\n\t Numbers After Swap in Function .\n";
	cout<<"\t";
	cout<<num1<<"  "<<num2;
	cout<<endl;
return 0;
}

void swap (int *num1 , int *num2){
	
	int temp;
	
	temp= *num1;
	*num1=*num2;
	*num2=temp;
	
}
