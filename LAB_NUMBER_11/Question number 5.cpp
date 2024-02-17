#include <iostream>
#include <string> 
using namespace std;

	struct Student { 
		string name; 
		int id;
		int *mark;
	};
	
	void inputStudent(Student* ptr,int);
	void OutputStudent(Student*ptr,int);
  
	int main () {
		int num_marks;
		cout<<"HEY BUDDY HOW MUCH OF SUBJECTS MARK DO YOU WANT  : ";
		cin>>num_marks;
		
		Student stu;
		Student* stuPtr = &stu; 
		inputStudent(&stu,num_marks); 
		OutputStudent(stuPtr,num_marks);
		return 0; 
	}
	
	void inputStudent(Student* ptr,int num_marks){
		cout<<"\n\t\tINPUTS\n\n";
		cout<<"Enter the name of Student here : ";
		cin.ignore();
		getline(cin, ptr->name);
		cout<<"Enter the Id here : ";
		cin>>ptr->id;
		
		ptr->mark = new int[num_marks];
		for(int i=0; i<num_marks; i++)
		{
		 cout<<"Enter mark "<<i+1<<" : ";
		 cin>>ptr->mark[i];
		 cout<<endl;
		}	
	}	
		
	void OutputStudent(Student*ptr,int){
		cout<<"\n\t\tOUTPUTS\n\n";
		cout<<"\tName of the Student is :  "<<ptr->name;
		cout<<endl;
		cout<<"\tName of the Id is :  "<<ptr->id;
		cout<<endl;
		
		for(int i=0 ; i<3 ; i++){
			cout<<"\tMarks "<<i+1<<" is : "<<ptr->mark[i]<<endl;		
		} 
	} 
	


