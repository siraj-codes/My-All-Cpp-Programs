//#include <iostream>
//#include <string>
//using namespace std;
//struct student_info{
//	string name[2];
//	int age[2];
//	char gender[2];
//	double marks[2];
//}s[2];
//int main()
//{
//		
//	for(int i=0 ; i<2 ; i++){
//		cout<<"\tEnter data for class "<<i+1;
//		cout<<endl;
//		for(int j=0 ; j<2 ; j++){
//			cout<<"Enter name "<<j+1<<" here : ";
//			cin>>s[i].name[j];
//			cout<<"Enter age "<<j+1<<" here : ";
//			cin>>s[i].age[j];
//			cout<<"Enter gender "<<j+1<<" here : ";
//			cin>>s[i].gender[j];
//			cout<<"Enter marks "<<j+1<<" here : ";
//			cin>>s[i].marks[j];
//			cout<<endl;
//		}
//		cout<<endl;
//	}
//	
//	for(int i=0 ; i<2 ; i++){
//		cout<<endl;
//		cout<<"\tData of class "<<i+1;
//		cout<<endl;
//		for(int j=0 ; j<2 ; j++){
//			cout<<"Name "<<"of student "<<j+1<<"of class "<<i+1<<" is :  "<<s[i].name[j];
//			cout<<"\nAge "<<"of student "<<j+1<<"of class "<<i+1<<" is :  "<<s[i].age[j];
//			cout<<"\nGender "<<"of student "<<j+1<<"of class "<<i+1<<" is :  "<<s[i].gender[j];
//			cout<<"\nMarks "<<"of student "<<j+1<<"of class "<<i+1<<" is :  "<<s[i].marks[j];
//			cout<<endl<<endl;
//		}
//		cout<<endl;
//	}
//return 0;
//}





//#include <iostream>
//#include <string>
//using namespace std;
//struct student_info{
//	string name[2];
//	int age[2];
//	char gender[2];
//	double marks[2];
//}s[2][2];
//int main(){
//	
//		for(int i=0 ; i<2 ; i++){
//			
//		cout<<"\tEnter data for class "<<i+1;
//		cout<<endl;
//		
//			for(int j=0 ; j<2 ; j++){
//		
//				for(int k=0 ; k<2 ; k++){
//			
//				cout<<"Enter name "<<k+1<<" here : ";
//				cin>>s[i][j].name[k];
//				cout<<"Enter age "<<k+1<<" here : ";
//				cin>>s[i][j].age[k];
//				cout<<"Enter gender "<<k+1<<" here : ";
//				cin>>s[i][j].gender[k];
//				cout<<"Enter marks "<<k+1<<" here : ";
//				cin>>s[i][j].marks[k];
//				cout<<endl;
//				
//				}
//			}
//				
//		cout<<endl;
//		
//		}
//		
//		
//
//return 0;
//}


#include <iostream>
#include <string>
using namespace std;
struct student_info{
	string name[2];
	int age[2] ;
	char gender[2];
	double marks[2];
}s[2];
int main(){
	char inp , s_gender;
	string s_name;
	double s_marks;
	int s_age,s_class;
	bool check=false;
	
	
	for(int i=0 ; i<2 ; i++){
		cout<<"\tEnter data for class "<<i+1;
		cout<<endl;
		for(int j=0 ; j<2 ; j++){
			cout<<"Enter name "<<j+1<<" here : ";
			cin>>s[i].name[j];
			cout<<"Enter age "<<j+1<<" here : ";
			cin>>s[i].age[j];
			cout<<"Enter gender "<<j+1<<" here : ";
			cin>>s[i].gender[j];
			cout<<"Enter marks "<<j+1<<" here : ";
			cin>>s[i].marks[j];
			cout<<endl;
		}
		cout<<endl;
	}
	
	
	cout<<endl<<endl;
	
	cout<<endl<<endl;
	cout<<"Enter 1 to search with name";
	cout<<"\nEnter 2 to search with age";
	cout<<"\nEnter 3 to search with gender";
	cout<<"\nEnter 4 to search with marks";
	cout<<endl<<"Enter option here :  ";
	cin>>inp;
	
	switch (inp){
		
		case 1:{
				cout<<endl<<"Enter the name to search here : ";
				cin>>s_name;
					for(int i=0 ; i<2 ; i++){
						
						for(int j=0 ; j<2 ; j++){
							if(s_name==s[i].name[j] ){
								cout<<s[i].name[j]<<"  "<<s[i].age[j]<<"  "<<s[i].gender[j]<<"  "<<s[i].marks[j];
							}
						}
					}
			break;
		}
		
		case 2:{
				cout<<endl<<"Enter the age to search here : ";
				cin>>s_age;
					for(int i=0 ; i<2 ; i++){
						
						for(int j=0 ; j<2 ; j++){
							if(s_age==s[i].age[j] ){
								cout<<s[i].name[j]<<"  "<<s[i].age[j]<<"  "<<s[i].gender[j]<<"  "<<s[i].marks[j];
							}
						}
					}
			break;
		}
		
		
		case 3:{
				cout<<endl<<"Enter the gender to search here : ";
				cin>>s_gender;
					for(int i=0 ; i<2 ; i++){
						
						for(int j=0 ; j<2 ; j++){
							if(s_age==s[i].gender[j] ){
								cout<<s[i].name[j]<<"  "<<s[i].age[j]<<"  "<<s[i].gender[j]<<"  "<<s[i].marks[j];
							}
						}
					}
			break;
		}
		
		
		case 4:{
				cout<<endl<<"Enter the marks to search here : ";
				cin>>s_marks;
					for(int i=0 ; i<2 ; i++){
						
						for(int j=0 ; j<2 ; j++){
							if(s_age==s[i].marks[j] ){
								cout<<s[i].name[j]<<"  "<<s[i].age[j]<<"  "<<s[i].gender[j]<<"  "<<s[i].marks[j];
							}
						}
					}
			break;
		}
		
		
	}
	
	
	
	
	
	
return 0;
}
