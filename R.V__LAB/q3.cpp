#include<iostream>
#include<string>
using namespace std;
bool isLeapYear(int);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(int,int);

int main(){
	
	int day_n,month,year,c_v,y_v,m_v,sum;
	
	string day;
	
	bool leap;
	
	cout<<"Enter the day :";
	cin>>day_n;
	
	cout<<"Enter the month : ";
	cin>>month;
	
	cout<<"Enter the year : ";
	cin>>year;
	
	leap=isLeapYear(year);
	
	if(leap==true)
	
	cout<<leap<<endl;
	
	else if (leap==false)
	
	cout<<leap<<endl;
	
	c_v=getCenturyValue(year);
	
	y_v=getYearValue(year);

	m_v=getMonthValue(month,year);
	
	sum=day_n+c_v+y_v+m_v;
	
	if(sum%7==0)
	day="Sunday";
  
    else if(sum%7==1)
    day="Monday";
  
    else if(sum%7==2)
    day="Tuesday";
  
    else if(sum%7==3)
    day="Wednesday";
  
    else if(sum%7==4)
    day="Thursday";
  
    else if(sum%7==5)
    day="Friday";
  
    else if(sum%7==6)
    day="Saturday";
    
    cout<<"The day on "<<day_n<<" /"<<month<<" /"<<year<<" is: "<<day;
	return 0;
}

bool isLeapYear(int year){
	
	if(year%400==0 || (year%4==0 && year%100!=0))
	return true;		
	else
	return false;
}

int getCenturyValue(int year){
	
	int yr;
	year=year/100;
	yr=year%4; 
	yr=3-yr;  
	return yr*2;
}

int getYearValue(int year){
	
	int yr, y, yvalue;
	yr=year%100;
	y=yr/4;
	yvalue=yr+y;
	return yvalue;
}
int getMonthValue(int month,int year){
	if(month==1)
	{
		if(year%400==0 || (year%4==0 && year%100!=0))
		return 6;
		else 
		return 0;
	}
	
	else if (month==2)
	{
		if(year%400==0 || (year%4==0 && year%100!=0))
		return 2;
		else
		return 3;
	}
	
	else if (month==3)
	return 3;
	
		else if (month==4)
	return 6;
	
	else if (month==5)
	return 1;
	
	else if (month==6)
	return 4;
	
	else if (month==7)
	return 6;
	
	else if (month==8)
	return 2;
	
	else if (month==9)
	return 5;
	
	else if (month==10)
	return 0;
	
	else if (month==11)
	return 3;
	
	else if (month==12)
	return 5;
}
