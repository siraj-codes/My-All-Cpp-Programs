#include <iostream>
using namespace std;

int main()
{
	int array[5]={1,2,3,4,5};
	int *array_ptr;
	
	array_ptr=array;
	
	cout<<"\n\tvalue of variables and there adresses by the help of pointers."<<endl;
	
	for(int i=0 ; i<5 ;i++){
		
		cout<<"\t"<<*(array_ptr+i)<<"  "<<(array_ptr+i)<<endl;
		
	}

return 0;
}

