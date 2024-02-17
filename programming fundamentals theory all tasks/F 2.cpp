#include <iostream>
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
		Books Books_In_Shelf[5];
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
			cout<<"Enter Library "<<i+1<< " Id : ";
			cin>>Library[i].Lib_Id;
			cout<<"Enter Library "<<i+1<< " Name : ";
			cin>>Library[i].Lib_Name;
			cout<<"Enter Library "<<i+1<< " Type : ";
			cin>>Library[i].Lib_Type;
			cout<<"Enter Library "<<i+1<< " Capacity : ";
			cin>>Library[i].Lib_capacity;
			cout<<"Enter Library "<<i+1<< " City : ";
			cin>>Library[i].Lib_City;
			cout<<"Enter Library "<<i+1<< " Fees : ";
			cin>>Library[i].Lib_Fees;
			cout<<endl<<endl;
			
			for(int j=0 ; j<2 ; j++){
				
				cout<<"Enter Shelf "<<i+1<< " Id : ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Id;
				cout<<"Enter Shelf "<<i+1<< " Name : ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Name;
				cout<<"Enter Shelf "<<i+1<< " Catogery : ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_catogery;
				cout<<"Enter Shelf "<<i+1<< " Color : ";
				cin>>Library[i].Shelfs_In_Lib[j].Shelf_Color;
				cout<<endl<<endl;
				
				for(int k=0 ; k<5 ; k++){
					cout<<"Enter Book "<<i+1<< " Id : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id;
					cout<<"Enter Book "<<i+1<< " Name : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name;
					cout<<"Enter Book "<<i+1<< " Catogery : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery;
					cout<<"Enter Book "<<i+1<< " Author name : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name;
					cout<<"Enter Book "<<i+1<< " Pages : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page;
					cout<<"Enter Book "<<i+1<< " Price : ";
					cin>>Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price;
				}
			}
			
			
		}
		
		int ans;
		
		do{
			
			
		int options ;
		cout<<endl<<endl;
		cout<<"Press 1 for Searching : ";
		cout<<"Press 2 for Update : ";
		cout<<"Press 3 for Add : ";
		cout<<"Press 4 for Delete : ";
		cout<<"\n Select from above : ";
		cin>>options;
		
		
			
			
		if(options==1){
			
				
			
			
			
				bool Exists=false;
		
				int S_Lib_Id , S_Lib_capacity , S_Lib_Fees , S_Shelf_Id , S_Book_Id , S_Book_Page, SEARCH;
		
				double S_Book_Price;
		
				string S_Book_Name , S_Book_Au_Name , S_Book_catogery , S_Shelf_Name , S_Shelf_Color , S_Shelf_catogery , S_Lib_Name , S_Lib_Type , S_Lib_City , S_Lib_Review ;
		
		
				cout<<"PRESS 1 to Search By Library Id   ";
				cout<<endl;
				cout<<"PRESS 2 to Search By Library Name   ";
				cout<<endl;
				cout<<"PRESS 3 to Search By Library city   ";
				cout<<endl;
				cout<<"PRESS 4 to Search By Library Type   ";
	   			cout<<endl;
				cout<<"PRESS 5 to Search By Library Review   ";
				cout<<endl;
				cout<<"PRESS 6 to Search By Library Fees   ";
				cout<<endl;
				cout<<"PRESS 6 to Search By Library Capacity   ";
				cout<<endl;
				cout<<"PRESS 8 to Search By Shelf Id   ";
				cout<<endl;
				cout<<"PRESS 9 to Search By Shelf Name   ";
				cout<<endl;
				cout<<"PRESS 10 to Search By Shelf Catogrey   ";
				cout<<endl;
				cout<<"PRESS 11 to Search By Shelf Color   ";
				cout<<endl;
				cout<<"PRESS 12 to Search By Book Id   ";
				cout<<endl;
				cout<<"PRESS 13 to Search By Book Name   ";
				cout<<endl;
				cout<<"PRESS 14 to Search By Book_Author Name   ";
				cout<<endl;
				cout<<"PRESS 15 to Search By Book Catogery   ";
				cout<<endl;
				cout<<"PRESS 16 to Search By Book Price   ";
				cout<<endl;
				cout<<"PRESS 17 to Search By Book Pages   ";
				cout<<endl;
		
				cout<<"\n Enter the Search number here   ";
				cin>>SEARCH;
			
				switch (SEARCH){
			
					case 1:{
						cout<<"\n\t Enter the Library Id :  ";
						cin>>S_Lib_Id;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_Id==Library[i].Lib_Id){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
					
						}	
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 2:{
						cout<<"\n\t Enter the Library Name :  ";
						cin.ignore();
					getline(cin,S_Lib_Name);
				
					cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_Name==Library[i].Lib_Name){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 3:{
						cout<<"\n\t Enter the Library City :  ";
						cin.ignore();
						getline(cin,S_Lib_City);
				
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_City==Library[i].Lib_City){
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
						
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 4:{
						cout<<"\n\t Enter the Library Type :  ";
						cin.ignore();
						getline(cin,S_Lib_Type);
				
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_Type==Library[i].Lib_Type){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 5:{
						cout<<"\n\t Enter the Library Review :  ";
						cin>>S_Lib_Review;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_Review==Library[i].Lib_Review){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 6:{
						cout<<"\n\t Enter the Library Fees :  ";
						cin>>S_Lib_Fees;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_Fees==Library[i].Lib_Fees){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 7:{
						cout<<"\n\t Enter the Library Capacity :  ";
						cin>>S_Lib_capacity;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							if(S_Lib_capacity==Library[i].Lib_capacity){
						
								Exists=true;
								cout<<"\n\t Library Information  \n\n";
								cout<<"Lib Id is : "<<Library[i].Lib_Id<<"\n"<<"Lib Name is : "<<Library[i].Lib_Name<<"\n"<<"Lib City is : "<<Library[i].Lib_City<<"\n"<<"Lib Type is : "<<Library[i].Lib_Type<<"\n"<<"Lib Capacity is : "<<Library[i].Lib_capacity<<"\n"<<"Lib Fees is : "<<Library[i].Lib_Fees<<endl;
							}
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 8:{
						cout<<"\n\t Enter the Shelf Id :  ";
						cin>> S_Shelf_Id;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							for(int j=0 ; j<3 ; j++){
					
								if( S_Shelf_Id==Library[i].Shelfs_In_Lib[j].Shelf_Id){
						
									Exists=true;
									cout<<"\n\t Shelf Information  \n\n";
									cout<<"Shelf Id is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Id<<"\n"<<"Shelf Name is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Name<<"\n"<<"Shelf Catogrey is : "<<Library[i].Shelfs_In_Lib[j].Shelf_catogery<<"\n"<<"Shelf Color is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Color<<endl;
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 9:{
						cout<<"\n\t Enter the Shelf Name :  ";
						cin.ignore();
						getline(cin,S_Shelf_Name);
				
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							for(int j=0 ; j<3 ; j++){
					
								if( S_Shelf_Name==Library[i].Shelfs_In_Lib[j].Shelf_Name){
						
									Exists=true;
									cout<<"\n\t Shelf Information  \n\n";
									cout<<"Shelf Id is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Id<<"\n"<<"Shelf Name is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Name<<"\n"<<"Shelf Catogrey is : "<<Library[i].Shelfs_In_Lib[j].Shelf_catogery<<"\n"<<"Shelf Color is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Color<<endl;
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 10:{
						cout<<"\n\t Enter the Shelf Catogrey :  ";
						cin.ignore();
						getline(cin,S_Shelf_catogery);
				
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							for(int j=0 ; j<3 ; j++){
					
								if( S_Shelf_catogery==Library[i].Shelfs_In_Lib[j].Shelf_catogery){
						
									Exists=true;
									cout<<"\n\t Shelf Information  \n\n";
									cout<<"Shelf Id is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Id<<"\n"<<"Shelf Name is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Name<<"\n"<<"Shelf Catogrey is : "<<Library[i].Shelfs_In_Lib[j].Shelf_catogery<<"\n"<<"Shelf Color is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Color<<endl;
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 11:{
						cout<<"\n\t Enter the Shelf Color :  ";
						cin.ignore();
						getline(cin,S_Shelf_Color);
				
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
					
							for(int j=0 ; j<3 ; j++){
					
								if( S_Shelf_Color==Library[i].Shelfs_In_Lib[j].Shelf_Color){
						
									Exists=true;
									cout<<"\n\t Shelf Information  \n\n";
									cout<<"Shelf Id is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Id<<"\n"<<"Shelf Name is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Name<<"\n"<<"Shelf Catogrey is : "<<Library[i].Shelfs_In_Lib[j].Shelf_catogery<<"\n"<<"Shelf Color is : "<<Library[i].Shelfs_In_Lib[j].Shelf_Color<<endl;
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 12:{
						cout<<"\n\t Enter the Book Id :  ";
						cin>> S_Book_Id;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_Id==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 13:{
						cout<<"\n\t Enter the Book Name :  ";
						cin.ignore();
						getline(cin,S_Book_Name);
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_Name==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 14:{
						cout<<"\n\t Enter the Book Author Name :  ";
						cin.ignore();
						getline(cin,S_Book_Au_Name);
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_Au_Name==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
		
			
					case 15:{
						cout<<"\n\t Enter the Book Catogery :  ";
						cin>> S_Book_catogery;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_catogery==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}	
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
			
					case 16:{
						cout<<"\n\t Enter the Book Price :  ";
						cin>> S_Book_Price;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_Price==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
			
					case 17:{
						cout<<"\n\t Enter the Book Page :  ";
						cin>> S_Book_Page;
						cout<<endl;
						for(int i=0 ; i<5 ;i++){
							for(int j=0 ; j<3 ;j++){
					
								for(int k=0 ; k<5 ; k++){
					
									if( S_Book_Page==Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page){
						
										Exists=true;
										cout<<"\n\t Book Information  \n\n";
										cout<<"Book Id is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Id<<"\n"<<"Book Name is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Name<<"\n"<<"Book Author Name is "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Au_Name<<"\n"<<"Book price is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Price<<"\n"<<"Book page is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_Page<<"\n"<<"Book catogery is : "<<Library[i].Shelfs_In_Lib[j].Books_In_Shelf[k].Book_catogery<<endl;
									}
								}
							}	
						}
				
						if(Exists!=true){
							cout<<"Sorry this  is not in our record !!\n ";
							break;
						}
				
						break;
					}
				}
			}
		
		
		else if(options==2){
			
			int v_up;
			cout<<"\nPress 1 for Library Id update : ";
			cout<<"\nPress 2 for Shelf Id update : ";
			if(v_up==1){
			
				for(int i=0 ; i<2 ; i++){
					cout<<" Update  Value Library "<<i+1<<" Id : ";
					cin>>Library[i].Lib_Id;
				}
			}
			
			if(v_up==2){
				for(int i=0 ; i<2 ; i++){
				
					for(int j=0 ; j<2 ; j++){
						cout<<" Update  Value Shelf "<<j+1<<" Id : ";
						cin>>Library[i].Shelfs_In_Lib[j].Shelf_Id;
					}
				}
			}
		}
		
		cout<<"\n\nDo you want to search any thing else enter 1 other wise 0  : ";
		cin>>ans;
			
		}while(ans==1);
			
		if(ans==0||ans==0)
		cout<<"\n\n\t\t THANK-YOU HAVE A NICE DAY :) ...";
		return 0;
	}

