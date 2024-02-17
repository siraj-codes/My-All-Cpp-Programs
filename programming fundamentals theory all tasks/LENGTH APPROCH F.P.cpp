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
		Books Books_In_Shelf[15];
	};
	
	struct Lib{
		int Lib_Id;
		string Lib_Name;
		string Lib_Type;
		int Lib_capacity;
		string Lib_City;
		int Lib_Fees;
		string Lib_Review;
		Shelfs Shelfs_In_Lib[5];
	};

	int main()
	{
		Lib Library[5];
		
		//********************************************************************* FOR-ALL-LAIBRARIES-INPUTS
		//FOR Library Id here
		Library[0].Lib_Id=101;
		Library[1].Lib_Id=102;
		Library[2].Lib_Id=103;
		Library[3].Lib_Id=104;
		Library[4].Lib_Id=105;
		 
		//FOR Library Name here
		Library[0].Lib_Name="Frere Hall";
		Library[1].Lib_Name="Allama Iqbal Library";
		Library[2].Lib_Name="Army Central Library.";
		Library[3].Lib_Name="National Library of Pakistan";
		Library[4].Lib_Name="Allama Iqbal Public Library"; 
			
		//FOR Library Type here
		Library[0].Lib_Type="Academic";
		Library[1].Lib_Type="Children's ";
		Library[2].Lib_Type="National ";
		Library[3].Lib_Type="Academic";
		Library[4].Lib_Type="National"; 
		
		//FOR Library Capacity here
		Library[0].Lib_capacity=500;
		Library[1].Lib_capacity=1000;
		Library[2].Lib_capacity=1000;
		Library[3].Lib_capacity=2000;
		Library[4].Lib_capacity=2500; 
		
		//FOR Library City here
		Library[0].Lib_City="Sukkur";
		Library[1].Lib_City="Karachi";
		Library[2].Lib_City="Karachi";
		Library[3].Lib_City="Lahore";
		Library[4].Lib_City="Islamabad";
				
		//FOR Library Fees here
		Library[0].Lib_Fees=500;
		Library[1].Lib_Fees=1000;
		Library[2].Lib_Fees=1000;
		Library[3].Lib_Fees=2000;
		Library[4].Lib_Fees=2500; 
				
		//FOR Library Review here
		Library[0].Lib_Review="Good";
		Library[1].Lib_Review="Bad";
		Library[2].Lib_Review="Good";
		Library[3].Lib_Review="Normal";
		Library[4].Lib_Review="Excellent";	
		
		
		//********************************************************************* FOR-ALL-SHELFS-INPUTS
		//FOR All shelfs Id of Library 1 here
		Library[0].Shelfs_In_Lib[0].Shelf_Id=10;
		Library[0].Shelfs_In_Lib[1].Shelf_Id=20;
		Library[0].Shelfs_In_Lib[2].Shelf_Id=30;
		Library[0].Shelfs_In_Lib[3].Shelf_Id=40;
		Library[0].Shelfs_In_Lib[4].Shelf_Id=50;
		
		//FOR All shelfs Id of Library 2 here
		Library[1].Shelfs_In_Lib[0].Shelf_Id=11;
		Library[1].Shelfs_In_Lib[1].Shelf_Id=21;
		Library[1].Shelfs_In_Lib[2].Shelf_Id=31;
		Library[1].Shelfs_In_Lib[3].Shelf_Id=41;
		Library[1].Shelfs_In_Lib[4].Shelf_Id=51;
		
		
		//FOR All shelfs Id of Library 3 here
		Library[2].Shelfs_In_Lib[0].Shelf_Id=12;
		Library[2].Shelfs_In_Lib[1].Shelf_Id=22;
		Library[2].Shelfs_In_Lib[2].Shelf_Id=32;
		Library[2].Shelfs_In_Lib[3].Shelf_Id=42;
		Library[2].Shelfs_In_Lib[4].Shelf_Id=52;
		
		//FOR All shelfs Id of Library 4 here
		Library[3].Shelfs_In_Lib[0].Shelf_Id=13;
		Library[3].Shelfs_In_Lib[1].Shelf_Id=23;
		Library[3].Shelfs_In_Lib[2].Shelf_Id=33;
		Library[3].Shelfs_In_Lib[3].Shelf_Id=43;
		Library[3].Shelfs_In_Lib[4].Shelf_Id=53;
		
		//FOR All shelfs Id of Library 5 here
		Library[4].Shelfs_In_Lib[0].Shelf_Id=13;
		Library[4].Shelfs_In_Lib[1].Shelf_Id=23;
		Library[4].Shelfs_In_Lib[2].Shelf_Id=33;
		Library[4].Shelfs_In_Lib[3].Shelf_Id=43;
		Library[4].Shelfs_In_Lib[4].Shelf_Id=53;
		
		//FOR All shelfs Name of Library 1 here
		Library[0].Shelfs_In_Lib[0].Shelf_Name="A";
		Library[0].Shelfs_In_Lib[1].Shelf_Name="B";
		Library[0].Shelfs_In_Lib[2].Shelf_Name="C";
		Library[0].Shelfs_In_Lib[3].Shelf_Name="D";
		Library[0].Shelfs_In_Lib[4].Shelf_Name="E";
		
		//FOR All shelfs Name of Library 2 here
		Library[1].Shelfs_In_Lib[0].Shelf_Name="AA";
		Library[1].Shelfs_In_Lib[1].Shelf_Name="BB";
		Library[1].Shelfs_In_Lib[2].Shelf_Name="CC";
		Library[1].Shelfs_In_Lib[3].Shelf_Name="DD";
		Library[1].Shelfs_In_Lib[4].Shelf_Name="EE";
		
		//FOR All shelfs Name of Library 3 here
		Library[2].Shelfs_In_Lib[0].Shelf_Name="AAA";
		Library[2].Shelfs_In_Lib[1].Shelf_Name="BBB";
		Library[2].Shelfs_In_Lib[2].Shelf_Name="CCC";
		Library[2].Shelfs_In_Lib[3].Shelf_Name="DDD";
		Library[2].Shelfs_In_Lib[4].Shelf_Name="EEE";
		
		//FOR All shelfs Name of Library 4 here
		Library[3].Shelfs_In_Lib[0].Shelf_Name="AAA1";
		Library[3].Shelfs_In_Lib[1].Shelf_Name="BBB1";
		Library[3].Shelfs_In_Lib[2].Shelf_Name="CCC1";
		Library[3].Shelfs_In_Lib[3].Shelf_Name="DDD1";
		Library[3].Shelfs_In_Lib[4].Shelf_Name="EEE1";
		
		//FOR All shelfs Name of Library 5 here
		Library[4].Shelfs_In_Lib[0].Shelf_Name="AAA2";
		Library[4].Shelfs_In_Lib[1].Shelf_Name="BBB2";
		Library[4].Shelfs_In_Lib[2].Shelf_Name="CCC2";
		Library[4].Shelfs_In_Lib[3].Shelf_Name="DDD2";
		Library[4].Shelfs_In_Lib[4].Shelf_Name="EEE2";
		
		//FOR All shelfs Color of Library 1 here
		Library[0].Shelfs_In_Lib[1].Shelf_Color="Green";
		Library[0].Shelfs_In_Lib[0].Shelf_Color="Green";
		Library[0].Shelfs_In_Lib[2].Shelf_Color="Blue";
		Library[0].Shelfs_In_Lib[3].Shelf_Color="Blue";
		Library[0].Shelfs_In_Lib[4].Shelf_Color="Red";
		
		//FOR All shelfs Color of Library 2 here
		Library[1].Shelfs_In_Lib[1].Shelf_Color="Green";
		Library[1].Shelfs_In_Lib[0].Shelf_Color="Green";
		Library[1].Shelfs_In_Lib[2].Shelf_Color="Blue";
		Library[1].Shelfs_In_Lib[3].Shelf_Color="Blue";
		Library[1].Shelfs_In_Lib[4].Shelf_Color="Red";
		
		//FOR All shelfs Color of Library 3 here
		Library[2].Shelfs_In_Lib[1].Shelf_Color="Green";
		Library[2].Shelfs_In_Lib[0].Shelf_Color="Green";
		Library[2].Shelfs_In_Lib[2].Shelf_Color="Blue";
		Library[2].Shelfs_In_Lib[3].Shelf_Color="Blue";
		Library[2].Shelfs_In_Lib[4].Shelf_Color="Red";
		
		//FOR All shelfs Color of Library 4 here
		Library[3].Shelfs_In_Lib[1].Shelf_Color="Green";
		Library[3].Shelfs_In_Lib[0].Shelf_Color="Green";
		Library[3].Shelfs_In_Lib[2].Shelf_Color="Blue";
		Library[3].Shelfs_In_Lib[3].Shelf_Color="Blue";
		Library[3].Shelfs_In_Lib[4].Shelf_Color="Red";
		
		//FOR All shelfs Color of Library 5 here
		Library[4].Shelfs_In_Lib[1].Shelf_Color="Green";
		Library[4].Shelfs_In_Lib[0].Shelf_Color="Green";
		Library[4].Shelfs_In_Lib[2].Shelf_Color="Blue";
		Library[4].Shelfs_In_Lib[3].Shelf_Color="Blue";
		Library[4].Shelfs_In_Lib[4].Shelf_Color="Red";
		
		//FOR All shelfs Catogery of Library 1 here
		Library[0].Shelfs_In_Lib[1].Shelf_catogery="Science";
		Library[0].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[0].Shelfs_In_Lib[2].Shelf_catogery="History";
		Library[0].Shelfs_In_Lib[3].Shelf_catogery="History";
		Library[0].Shelfs_In_Lib[4].Shelf_catogery="Geograpahy";
		
		//FOR All shelfs Catogery of Library 2 here
		Library[1].Shelfs_In_Lib[1].Shelf_catogery="Science";
		Library[1].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[1].Shelfs_In_Lib[2].Shelf_catogery="History";
		Library[1].Shelfs_In_Lib[3].Shelf_catogery="History";
		Library[1].Shelfs_In_Lib[4].Shelf_catogery="Geograpahy";
		
		//FOR All shelfs Catogery of Library 3 here
		Library[2].Shelfs_In_Lib[1].Shelf_catogery="Science";
		Library[2].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[2].Shelfs_In_Lib[2].Shelf_catogery="History";
		Library[2].Shelfs_In_Lib[3].Shelf_catogery="History";
		Library[2].Shelfs_In_Lib[4].Shelf_catogery="Geograpahy";
		
		//FOR All shelfs Catogery of Library 4 here
		Library[3].Shelfs_In_Lib[1].Shelf_catogery="Science";
		Library[3].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[3].Shelfs_In_Lib[2].Shelf_catogery="History";
		Library[3].Shelfs_In_Lib[3].Shelf_catogery="History";
		Library[3].Shelfs_In_Lib[4].Shelf_catogery="Geograpahy";
		
		//FOR All shelfs Catogery of Library 5 here
		Library[4].Shelfs_In_Lib[1].Shelf_catogery="Science";
		Library[4].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[4].Shelfs_In_Lib[2].Shelf_catogery="History";
		Library[4].Shelfs_In_Lib[3].Shelf_catogery="History";
		Library[4].Shelfs_In_Lib[4].Shelf_catogery="Geograpahy";
		
		//********************************************************************* FOR-ALL-BOOkS-INPUTS
		//FOR All books Id in shelf 1 of Library 1 here
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id=1;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id=2;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id=3;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id=4;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id=5;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[5].Book_Id=6;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[6].Book_Id=7;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[7].Book_Id=8;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[8].Book_Id=9;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[9].Book_Id=10;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[10].Book_Id=11;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[11].Book_Id=12;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[12].Book_Id=13;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[13].Book_Id=14;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[14].Book_Id=15;
		
		
		//FOR All books Id in shelf 2 of Library 1 here
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id=1;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id=2;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id=3;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id=4;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id=5;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[5].Book_Id=6;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[6].Book_Id=7;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[7].Book_Id=8;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[8].Book_Id=9;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[9].Book_Id=10;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[10].Book_Id=11;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[11].Book_Id=12;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[12].Book_Id=13;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[13].Book_Id=14;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[14].Book_Id=15;
		
		//FOR All books Id in shelf 3 of Library 1 here
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id=1;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id=2;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id=3;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id=4;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id=5;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[5].Book_Id=6;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[6].Book_Id=7;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[7].Book_Id=8;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[8].Book_Id=9;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[9].Book_Id=10;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[10].Book_Id=11;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[11].Book_Id=12;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[12].Book_Id=13;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[13].Book_Id=14;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[14].Book_Id=15;
		
		//FOR All books Id in shelf 4 of Library 1 here
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[0].Book_Id=1;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[1].Book_Id=2;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[2].Book_Id=3;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[3].Book_Id=4;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[4].Book_Id=5;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[5].Book_Id=6;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[6].Book_Id=7;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[7].Book_Id=8;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[8].Book_Id=9;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[9].Book_Id=10;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[10].Book_Id=11;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[11].Book_Id=12;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[12].Book_Id=13;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[13].Book_Id=14;
		Library[0].Shelfs_In_Lib[3].Books_In_Shelf[14].Book_Id=15;
		
		//FOR All books Id in shelf 5 of Library 1 here
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[0].Book_Id=1;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[1].Book_Id=2;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[2].Book_Id=3;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[3].Book_Id=4;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[4].Book_Id=5;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[5].Book_Id=6;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[6].Book_Id=7;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[7].Book_Id=8;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[8].Book_Id=9;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[9].Book_Id=10;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[10].Book_Id=11;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[11].Book_Id=12;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[12].Book_Id=13;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[13].Book_Id=14;
		Library[0].Shelfs_In_Lib[4].Books_In_Shelf[14].Book_Id=15;
		
		
		//FOR All books Id in shelf 1 of Library 2 here
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id=21;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id=22;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id=23;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id=24;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id=25;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[5].Book_Id=26;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[6].Book_Id=27;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[7].Book_Id=28;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[8].Book_Id=29;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[9].Book_Id=30;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[10].Book_Id=31;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[11].Book_Id=32;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[12].Book_Id=33;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[13].Book_Id=34;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[14].Book_Id=35;
		
		//FOR All books Id in shelf 2 of Library 2 here
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id=41;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id=42;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id=43;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id=44;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id=45;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[5].Book_Id=46;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[6].Book_Id=47;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[7].Book_Id=48;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[8].Book_Id=49;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[9].Book_Id=50;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[10].Book_Id=51;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[11].Book_Id=52;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[12].Book_Id=53;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[13].Book_Id=54;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[14].Book_Id=55;
		
		//FOR All books Id in shelf 3 of Library 2 here
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id=61;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id=62;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id=63;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id=64;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id=65;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[5].Book_Id=66;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[6].Book_Id=67;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[7].Book_Id=68;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[8].Book_Id=69;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[9].Book_Id=70;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[10].Book_Id=71;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[11].Book_Id=72;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[12].Book_Id=73;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[13].Book_Id=74;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[14].Book_Id=75;
		
		//FOR All books Id in shelf 4 of Library 2 here
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[0].Book_Id=76;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[1].Book_Id=77;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[2].Book_Id=78;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[3].Book_Id=79;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[4].Book_Id=80;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[5].Book_Id=81;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[6].Book_Id=82;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[7].Book_Id=83;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[8].Book_Id=84;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[9].Book_Id=85;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[10].Book_Id=86;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[11].Book_Id=87;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[12].Book_Id=88;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[13].Book_Id=89;
		Library[1].Shelfs_In_Lib[3].Books_In_Shelf[14].Book_Id=90;
		
		//FOR All books Id in shelf 5 of Library 2 here
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[0].Book_Id=91;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[1].Book_Id=92;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[2].Book_Id=93;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[3].Book_Id=94;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[4].Book_Id=95;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[5].Book_Id=96;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[6].Book_Id=97;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[7].Book_Id=98;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[8].Book_Id=99;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[9].Book_Id=100;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[10].Book_Id=101;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[11].Book_Id=102;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[12].Book_Id=103;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[13].Book_Id=104;
		Library[1].Shelfs_In_Lib[4].Books_In_Shelf[14].Book_Id=105;

		//FOR All books Id in shelf 1 of Library 3 here
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 106;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 107;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 108;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 109;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 110;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[5].Book_Id = 111;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[6].Book_Id = 112;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[7].Book_Id = 113;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[8].Book_Id = 114;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[9].Book_Id = 115;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[10].Book_Id = 116;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[11].Book_Id = 117;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[12].Book_Id = 118;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[13].Book_Id = 119;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[14].Book_Id = 120;

		//FOR All books Id in shelf 2 of Library 3 here
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 121;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 122;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 123;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 124;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 125;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[5].Book_Id = 126;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[6].Book_Id = 127;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[7].Book_Id = 128;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[8].Book_Id = 129;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[9].Book_Id = 130;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[10].Book_Id = 131;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[11].Book_Id = 132;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[12].Book_Id = 133;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[13].Book_Id = 134;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[14].Book_Id = 135;



		//FOR All books Id in shelf 3 of Library 3 here
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id = 136;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id = 137;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id = 138;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id = 139;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id = 140;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[5].Book_Id = 141;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[6].Book_Id = 142;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[7].Book_Id = 143;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[8].Book_Id = 144;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[9].Book_Id = 145;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[10].Book_Id = 146;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[11].Book_Id = 147;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[12].Book_Id = 148;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[13].Book_Id = 149;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[14].Book_Id = 150;



		//FOR All books Id in shelf 4 of Library 3 here
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[0].Book_Id = 151;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[1].Book_Id = 152;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[2].Book_Id = 153;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[3].Book_Id = 154;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[4].Book_Id = 155;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[5].Book_Id = 156;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[6].Book_Id = 157;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[7].Book_Id = 158;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[8].Book_Id = 159;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[9].Book_Id = 160;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[10].Book_Id = 161;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[11].Book_Id = 162;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[12].Book_Id = 163;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[13].Book_Id = 164;
		Library[2].Shelfs_In_Lib[3].Books_In_Shelf[14].Book_Id = 165;

		//FOR All books Id in shelf 5 of Library 3 here
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[0].Book_Id = 166;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[1].Book_Id = 167;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[2].Book_Id = 168;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[3].Book_Id = 169;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[4].Book_Id = 170;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[5].Book_Id = 171;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[6].Book_Id = 172;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[7].Book_Id = 173;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[8].Book_Id = 174;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[9].Book_Id = 175;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[10].Book_Id = 176;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[11].Book_Id = 177;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[12].Book_Id = 178;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[13].Book_Id = 179;
		Library[2].Shelfs_In_Lib[4].Books_In_Shelf[14].Book_Id = 180;

		//FOR All books Id in shelf 1 to 5 of Library 4 here
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 181;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 182;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 183;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 184;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 185;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[5].Book_Id = 186;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[6].Book_Id = 187;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[7].Book_Id = 188;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[8].Book_Id = 189;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[9].Book_Id = 190;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[10].Book_Id = 191;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[11].Book_Id = 192;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[12].Book_Id = 193;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[13].Book_Id = 194;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[14].Book_Id = 195;

		//FOR All books Id in shelf 2 of Library 4 here
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 196;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 197;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 198;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 199;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 200;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[5].Book_Id = 201;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[6].Book_Id = 202;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[7].Book_Id = 203;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[8].Book_Id = 204;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[9].Book_Id = 205;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[10].Book_Id = 206;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[11].Book_Id = 207;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[12].Book_Id = 208;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[13].Book_Id = 209;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[14].Book_Id = 210;

		//FOR ALL LIBRARY 1 HERE.
		
		return 0;
	}

// Book_Id	
	
	

