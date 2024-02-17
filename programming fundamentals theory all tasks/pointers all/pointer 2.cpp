#include <iostream>
using namespace std;

int main()
{
	int nums[5]={1,2,3,4,5};
	int nums2[5]={2,4,6,8,10};
	
	int *ptr;
	
	ptr=nums;
	
	cout<<nums<<"  "<<ptr<<"  "<<nums[0]<<"  "<<*ptr;
	

return 0;
}

