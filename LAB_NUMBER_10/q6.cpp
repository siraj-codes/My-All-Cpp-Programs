#include <iostream>
using namespace std;

int main()
{
	int array[10],*ptr_to_array,i,s_int;
	char check=false;
	
	
	ptr_to_array=array;
	
	cout<<endl<<"\t Input by pointers\n ";
	for(i=0 ; i<10 ;i++){
		
		cout<<"Enter value number " <<i+1 << " here :  " ;
		cin>>*(ptr_to_array+i);
		
	}
	
	cout<<endl<<"\t Output by pointers\n ";
	for( i=0 ; i<10 ;i++){
		
		cout<<"Value number " <<i+1 << " is :  "<<*(ptr_to_array+i);
		cout<<endl;
	}
		
	cout<<endl<<"\t Search by pointers\n ";
		
	cout<<"\n\t Which value do you wanna search ?? :   ";
	cin>>s_int;	
	
		for( i=0 ; i<5 ;i++){
			
			while (*(ptr_to_array+i)==s_int){
				check=true;
			break;
			}
			
		}
		
		if(check=true){
		cout<<"\nValue is  present in this array .";
		}
			
					
	
	


return 0;
}

