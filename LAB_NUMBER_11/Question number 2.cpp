#include <iostream>
using namespace std;
	struct Product_rec{
	
		string product_name;
		int product_model_number;
		double product_price;
	};
	
	void product_output ( abc[]);
	 
	int main()
	{
		Product_rec pro[10];
		cout<<"\n\tInputs\n";
		
		for(int i=0 ; i<10 ; i++){
			cout<<"Enter the product_name "<<i+1<<" : ";
			cin>>pro[i].product_name;
			cout<<"Enter the product_model_number "<<i+1<<" : ";
			cin>>pro[i].product_model_number;
			cout<<"Enter the product_price "<<i+1<<" : ";
			cin>>pro[i].product_price;
			cout<<endl;
		}
		
		product_output(pro);
		
		return 0;
	}

	void product_output (abc pro[]){
		
		cout<<"\n\tOutputs\n";
		
		for(int i=0 ; i<10 ; i++){
			
			cout<<"Product_name "<<i+1<<" : "<<pro[i].product_name<<endl;
			cout<<"Product_model_number "<<i+1<<" : "<<pro[i].product_model_number<<endl;
			cout<<"Product_price "<<i+1<<" : "<<pro[i].product_price<<endl;	
		}
		
	}
