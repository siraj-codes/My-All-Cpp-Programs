#include <iostream>
#include <string> 
using namespace std;

	struct Student { 
		string name; 
		int id;
		int mark[3];
	};
	
	void inputStudent(Student* ptr);
	void OutputStudent(Student*ptr);
  
	int main () {
		Student stu;  
		Student* stuPtr = &stu; 
		inputStudent(&stu); 
		OutputStudent(stuPtr);
	} 
	
	void inputStudent(Student* ptr){
		cout<<"Enter the Name of Student :  ";
		cin>>ptr->name;
		cout<<"Enter the ID of Student :  ";
		cin>>ptr->id;
		
		for(int i=0 ; i<3 ; i++){
			cout<<"Enter Marks"<<i+1<<" here : ";
			cin>>ptr->mark[i];		
		}
	}
	
	void OutputStudent(Student* ptr){
		cout<<endl<<endl;
		cout<<"\tName of the Student is :  "<<ptr->name;
		cout<<endl;
		cout<<"\tName of the Id is :  "<<ptr->id;
		cout<<endl;
		
		for(int i=0 ; i<3 ; i++){
			cout<<"\tMarks "<<i+1<<" is : "<<ptr->mark[i]<<endl;		
		} 
	}

