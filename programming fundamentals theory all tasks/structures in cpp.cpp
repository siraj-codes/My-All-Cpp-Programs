#include <iostream>
#include <string>
using namespace std;

struct student_info{
	int id;
	string name;
	char gen;
	int enroll;
	double cgpa;
	int age;
};


int main()

{
  char ans; 
 
 student_info s[10]={{23,"Siraj",'m',2022,3.5,18},{24,"Siraj",'m',2022,3.5,18},{25,"Haad",'m',2022,3.5,18},{26,"Sajad",'m',2021,3.5,19},{27,"Hasan",'m',2021,3.4,19},{28,"Sabir",'m',2021,3.4,20},{29,"Hameed",'m',2023,3.4,20},{30,"Asad",'m',2023,3.3,21},{31,"Haseeb",'m',2023,3.3,21},{32,"Arbaz",'m',2023,3.3,17}};

	do{
		
		int op;
		cout<<endl;
		cout<<"Enter 1 to search by id  ";
		
		cout<<"\nEnter 2 to search by name  ";
		
		cout<<"\nEnter 3 to search by gen  ";
		
		cout<<"\nEnter 4 to search by enroll_ment year  ";
		
		cout<<"\nEnter 5 to search by cgpa  ";
		
		cout<<"\nEnter 6 to search by age  ";
		
		cout<<endl<<"\nEnter number here : ";
		cin>>op;
		
	
	switch(op){
		
		case 1: {
				cout<<endl;
				int sid,i;
				bool check;
				check=false;
			
				cout<<"Enter id to search here : ";
				cin>>sid;
			
				for( i=0 ; i<10 ; i++){
				
					if(sid==s[i].id){
					check=true;
					}
				break;
				}
									
				if(check==true)
				cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age;
								
				break;	
		}
		
		case 2: {
				cout<<endl;
				int i;
				string name;
				bool check;
				check=false;
			
				cout<<"Enter name to search here : ";
				cin>>name;
			
				for( i=0 ; i<10 ; i++){
				
					if(name==s[i].name){
					cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age<<endl;
					}
//				break;
				}
									
			
								
				break;	
		}
		
		case 3: {
				cout<<endl;
				int i;
				char gen;
				bool check;
				check=false;
			
				cout<<"Enter gender to search here : ";
				cin>>gen;
			
				for( i=0 ; i<10 ; i++){
				
					while(gen==s[i].gen){
					cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age<<endl;
					break;
					}
					
					
				}
				break;	
			}
		
		
		
		case 4: {
				cout<<endl;
				int i;
				int num;
				bool check;
				check=false;
			
				cout<<"Enter enrollment year to search here : ";
				cin>>num;
			
				for( i=0 ; i<10 ; i++){
				
					while(num==s[i].enroll){
					cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age<<endl;
					break;
					}
				}
				break;	
			}
		
		
		
		case 5: {
				cout<<endl;
				int i;
				double cgpa;
				bool check;
				check=false;
			
				cout<<"Enter cgpa to search here : ";
				cin>>cgpa;
			
				for( i=0 ; i<10 ; i++){
				
					while(cgpa==s[i].cgpa){
					cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age<<endl;
					break;
					}
				}
				break;	
			}
	
		
		case 6: {
				cout<<endl;
				int i;
				int age;
				bool check;
				check=false;
			
				cout<<"Enter age to search here : ";
				cin>>age;
			
				for( i=0 ; i<10 ; i++){
				
					while(age==s[i].age){
					cout<<s[i].id<<"  "<<s[i].name<<" "<<s[i].gen<<" "<<s[i].enroll<<" "<<s[i].cgpa<<" "<<s[i].age<<endl;
					break;
					}
				}
				break;	
			}					
	}
		
		cout<<endl<<endl;
		cout<<"\n Do you wanna continue ?? (y/n)";
		cin>>ans;
		
	} while(ans=='y');	
		
	return 0;
}



//bool Exists=false;
		
		//int S_Lib_Id , S_Lib_capacity , S_Lib_Fees , S_Shelf_Id , S_Book_Id , S_Book_Page , SEARCH;
		
		//double S_Book_Price;
		
		//string S_Book_Name , S_Book_Au_Name , S_Book_catogery , S_Shelf_Name , S_Shelf_Color , S_Shelf_catogery , S_Lib_Name , S_Lib_Type , S_Lib_City , S_Lib_Review ;

