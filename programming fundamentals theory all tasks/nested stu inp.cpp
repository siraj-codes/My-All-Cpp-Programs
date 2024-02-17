#include <iostream>
#include <string>
using namespace std;

	struct Books{
		int Book_Id;
		string Book_Name;
		string Book_Au_Name;
		int Book_Page;
		double Book_Price;
		string Book_catogery;
	};
	
	struct Shelfs{
		int Shelf_Id;
		string Shelf_Name;
		string Shelf_Color;
		string Shelf_catogery;
		Books Books_In_Shelf[2];
	};
	
	struct Lib{
		int Lib_Id;
		string Lib_Name;
		string Lib_Type;
		int Lib_capacity;
		string Lib_City;
		int Lib_Fees;
		string Lib_Review;
		Shelfs Shelfs_In_Lib[2];
	};

	int main()
	{
		Lib Library[2];
		
		for(int i=0 ; i<2 ; i++){
			cout<<"Enter Library "<<i+1<<" id here :  ";
			cin>>Library[i].Lib_Id;
			cout<<"Enter Library "<<i+1<<" name here :  ";
			cin>>Library[i].Lib_Name;
			cout<<"Enter Library "<<i+1<<" type here :  ";
			cin>>Library[i].Lib_Type;
			cout<<"Enter Library "<<i+1<<" capacity here :  ";
			cin>>Library[i].Lib_capacity;
			cout<<"Enter Library "<<i+1<<" city here :  ";
			cin>>Library[i].Lib_City;
			cout<<"Enter Library "<<i+1<<" fees here :  ";
			cin>>Library[i].Lib_Fees;
			cout<<"Enter Library "<<i+1<<" review here :  ";
			cin>>Library[i].Lib_Review;
			cout<<endl;
			
			for(int j=0 ; j<2 ; j++){
				cout<<"Enter Shelf "<<i+1<<" id here :  ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Id;
				cout<<"Enter Shelf "<<i+1<<" name here :  ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Name;
				cout<<"Enter Shelf "<<i+1<<" color here :  ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Color;
				cout<<"Enter Shelf "<<i+1<<" catogery here :  ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_catogery;
				cout<<endl;
				
				for(int k=0 ; k<2 ; k++){
					cout<<"Enter Book "<<i+1<<" id here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id;
					cout<<"Enter Book "<<i+1<<" name here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name;
					cout<<"Enter Book "<<i+1<<" Author_name_here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name;
					cout<<"Enter Book "<<i+1<<" catogery here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery;
					cout<<"Enter Book "<<i+1<<" Page here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page;
					cout<<"Enter Book "<<i+1<<" Price here :  ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price;
					cout<<endl;
				}
			}
			cout<<endl;			
		}		
				
			
		
		cout<<endl;

		return 0;
	}

