#include <iostream>
using namespace std;

int main()
{
int English_Marks,Pakstudies_Marks,Islamiat_Marks,Chemistry_Marks,Biology_Marks,Physics_Marks,obtained,percentage;
 	
	cout<<"Enter English Marks Here : ";
	cin>>English_Marks;
	
 	
 	cout<<"Enter Pakistan-Studies Marks Here : ";
	cin>>Pakstudies_Marks;
	
	
	cout<<"Enter Islamiat Marks Here  : ";
	cin>>Islamiat_Marks;
	
	
	cout<<"Enter Chemistry Marks Here : ";
	cin>>Chemistry_Marks;
	
	
	cout<<"Enter Physics Marks Here   : ";
	cin>>Physics_Marks;
	
	
	cout<<"Enter Biology Marks Here   : ";
	cin>>Biology_Marks;
	
		cout<<"\t\t\t\t Mark-Sheet."<<endl;
	
	cout<<"\t English : "<<English_Marks<<" Out of 100 "<<endl;
	cout<<"\t Pakistan-Studies : "<<Pakstudies_Marks<<" Out of 100 "<<endl;
	cout<<"\t Islamiat : "<<Islamiat_Marks<<" Out of 100 "<<endl;
	cout<<"\t Chemistry : "<<Chemistry_Marks<<" Out of 100 "<<endl;
	cout<<"\t Physics : "<<Physics_Marks<<" Out of 100 "<<endl;
	cout<<"\t Biology : "<<Biology_Marks<<" Out of 100 "<<endl;
	
	
	obtained=English_Marks+Islamiat_Marks+Pakstudies_Marks+Chemistry_Marks+Physics_Marks+Biology_Marks;
	cout<<"\nObtained Marks is :  "<<obtained;
	
	percentage=(obtained*100)/600;
	cout<<"\nPercentage is : "<<percentage<<" Out of 100 ";
	
	switch(percentage)
	{
		case 100:
		case  99:
		case  98:
		case  97:
		case  96:
		case  95:
		case  94:
		case  93:
		case  92:
		case  91:
		case  90:
		case  89:
		case  88:
		case  87:
		case  86:
		case  85:
		case  84:
		case  83:
		case  82:
	    case  81:
		case  80:
			
		cout<<"\n your grade is A";
		break;
		
		case 79:
		case 78:
		case 77:
		case 76:
		case 75:
		case 74:
		case 73:
		case 72:
		case 71:
		case 70:
		
		cout<<"\n your grade is B";
		break;
		
		case 69:
		case 68:
		case 67:
		case 66:
		case 65:
		case 64:
		case 63:
		case 62:
		case 61:
		case 60:	
		
	    cout<<"\n your grade is C";
		break;
		
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
		case 54:
		case 53:
		case 52:
		case 51:
		case 50:	
		
	    cout<<"\n your grade is D";
		break;
		
		case 49:
		case 48:
		case 47:
		case 46:
		case 45:
		case 44:
		case 43:
		case 42:
		case 41:
		case 40:
		case 39:
		case 38:
		case 37:
		case 36:
		case 35:
		case 34:
		case 33:
		case 32:
		case 31:
		case 30:
		case 29:
		case 28:
		case 27:
		case 26:
		case 25:
		case 24:
		case 23:
		case 22:
		case 21:
		case 20:
		case 19:
		case 18:
		case 17:
		case 16:
		case 15:
		case 14:
		case 13:
		case 12:
		case 11:
		case 10:
		case  9:
		case  8:
		case  7:
		case  6:
		case  5:
		case  4:
		case  3:
		case  2:
		case  1:
		case  0:	
	     cout<<" \nFail!!!!!!!!!";		
		 break;
			
			
			
			
			
			
		default:
		cout<<"Invalid entry ";
	}

return 0;
}

