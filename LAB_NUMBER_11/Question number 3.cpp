#include <iostream>
#include <string>
using namespace std;
	struct Employee {
		int Employee_Number;
		string Employee_Name;
		double Employee_Basic_Salary;
		double Employee_House_Allowance;
		double Employee_Medical_Allowance;
		double Employee_Tax;
		double Employee_Gross_Pay;
		double Employee_Net_Salary;	
	};
	
	Employee empSalary(Employee);
	void dispaly (Employee);

	int main(){
		Employee eP , eP_All_Details;
		
		cout<<"Enter_Employee_Number:  ";
		cin>>eP.Employee_Number;
		cout<<"Enter_Employee_Name:  ";
		cin>>eP.Employee_Name;
		cout<<"Enter_Employee_Basic_Salary:  ";
		cin>>eP.Employee_Basic_Salary;
		eP_All_Details=empSalary(eP);
		dispaly (eP_All_Details);
		
		return 0;
	}
	
	Employee empSalary(Employee eP){
		eP.Employee_House_Allowance=(eP.Employee_Basic_Salary*10)/100;
		eP.Employee_Medical_Allowance=(eP.Employee_Basic_Salary*5)/100;
		eP.Employee_Tax=(eP.Employee_Basic_Salary*4)/100;
		eP.Employee_Gross_Pay=eP.Employee_Basic_Salary+eP.Employee_House_Allowance+eP.Employee_Medical_Allowance;
		eP.Employee_Net_Salary=eP.Employee_Gross_Pay-eP.Employee_Tax;
		return eP;
	}
	
	void dispaly (Employee eP_All_Details){
		cout<<endl<<endl<<"****************************************************************";
		cout<<"\n\n\t\t EMPLOYERS SALARY DETAILS ";
		cout<<endl<<endl<<"****************************************************************";
		cout<<endl<<endl<<"Employee Number: "<<eP_All_Details.Employee_Number;
		cout<<endl<<"Employee Name: "<<eP_All_Details.Employee_Name;
		cout<<endl<<"Basic Salary: "<<eP_All_Details.Employee_Basic_Salary;
		cout<<endl<<"House Allowence: "<<eP_All_Details.Employee_House_Allowance;
		cout<<endl<<"Medical Allowence: "<<eP_All_Details.Employee_Medical_Allowance;
		cout<<endl<<"Gross Salary: "<<eP_All_Details.Employee_Gross_Pay;
		cout<<endl<<"Tax Deduction: "<<eP_All_Details.Employee_Tax;
		cout<<endl<<"Net Salary: "<<eP_All_Details.Employee_Net_Salary;
		
	}

