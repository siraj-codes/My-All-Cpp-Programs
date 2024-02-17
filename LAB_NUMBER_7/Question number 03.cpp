#include <iostream>
using namespace std;

int main()
{
	int  i ;
	float  sum=0;
	
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	
	for(i=0;i<10;i++){
		sum+=array[i];
	}
	
	cout<<"average of the elements in this array is : "<<sum/10;

return 0;
}

