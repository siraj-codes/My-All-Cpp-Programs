#include <iostream>
#include <string>
using namespace std;

	struct S_R{
	
		int ID,Phone_number;
		string Name,Department,Email;

	};
	
	int main()
	{
		S_R s[5];
		cout<<"\n\tINPUTS\n";
		for (int i=0 ; i<5 ; i++){
			
			cout<<"Enter the Id of student "<<i+1<<" : ";
			cin>>s[i].ID;
			cout<<"Enter the Name of student "<<i+1<<" : ";
			cin>>s[i].Name;
			cout<<"Enter the Department of student "<<i+1<<" : ";
			cin>>s[i].Department;
			cout<<"Enter the Email of student "<<i+1<<" : ";
			cin>>s[i].Email;
			cout<<"Enter the Phone_number of student "<<i+1<<" : ";
			cin>>s[i].Phone_number;
			cout<<endl;
			cin.ignore();
		}
		
		cout<<"\n\tOUTPUTS\n";
		for(int i=0 ; i<5 ; i++){
			
			cout<<"ID of Student "<<i+1<<" is : "<<s[i].ID<<endl;
			cout<<"Name of Student "<<i+1<<" is : "<<s[i].Name<<endl;
			cout<<"Department of Student "<<i+1<<" is : "<<s[i].Department<<endl;
			cout<<"Email of Student "<<i+1<<" is : "<<s[i].Email<<endl;
			cout<<"Name of Phone_number "<<i+1<<" is : "<<s[i].Phone_number<<endl;
		}

return 0;
}

