#include <iostream>
using namespace std;

	int main()
	{
 	 int O[5]={111,22,56,76,67}
 	 	for(int i=0 ; i<5 ; i++){
 	 	
 	 	    for(int j=i+1 ; j<5-1 ;j++){
 	 	    	
 	 	 		if(O[i]>O[j]){
 	 	 			
 	 	  		 int t;
 	 	  		 t=O[i];
		  		 O[i]=O[j];
		  		 O[j]=t;			
		 		}	
			}
	 	}	
	 
		return 0;
	}

