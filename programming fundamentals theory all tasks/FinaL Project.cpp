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
		Shelfs Shelfs_In_Lib[3];
	};

	int main()
	{
		Lib Library[5];
		
		bool Exists=false;
		
		int S_Lib_Id , S_Lib_capacity , S_Lib_Fees , S_Shelf_Id , S_Book_Id , S_Book_Page, SEARCH;
		
		double S_Book_Price;
		
		string S_Book_Name , S_Book_Au_Name , S_Book_catogery , S_Shelf_Name , S_Shelf_Color , S_Shelf_catogery , S_Lib_Name , S_Lib_Type , S_Lib_City , S_Lib_Review ;
		
		
        //FOR ALL OF Library 1.. 
        
		Library[0].Lib_Id=1;
		Library[0].Lib_Name="Frere Hall";
		Library[0].Lib_City="Sukkur";
		Library[0].Lib_capacity=500;
		Library[0].Lib_Type="Academic";
		Library[0].Lib_Fees=1000;
		Library[0].Lib_Review="Good";
		
		//OF SHELF 1
		
		Library[0].Shelfs_In_Lib[0].Shelf_Name="A1";
		Library[0].Shelfs_In_Lib[0].Shelf_catogery="Science";
		Library[0].Shelfs_In_Lib[0].Shelf_Color="Orange";
		Library[0].Shelfs_In_Lib[0].Shelf_Id=11;
		
		//***********************************
		
		//OF SHELF 2
		
		Library[0].Shelfs_In_Lib[1].Shelf_Name = "B1";
		Library[0].Shelfs_In_Lib[1].Shelf_catogery = "Science";  
		Library[0].Shelfs_In_Lib[1].Shelf_Color = "Blue";
		Library[0].Shelfs_In_Lib[1].Shelf_Id = 12;
		
		//***********************************
		
		//OF SHELF 3
		
		Library[0].Shelfs_In_Lib[2].Shelf_Name = "C1";
		Library[0].Shelfs_In_Lib[2].Shelf_catogery = "History";  
		Library[0].Shelfs_In_Lib[2].Shelf_Color = "Green";
		Library[0].Shelfs_In_Lib[2].Shelf_Id = 13;
		
		//***********************************
		
		//OF SHELF_1 BOOKS
		
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Name="A Brief History of Time";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Au_Name="Stephen Hawking";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id=202;	
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Price=2000;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Page=500;
		
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Name="Cosmos";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Au_Name="Carl Sagan";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id=203;	
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Price=1500;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Page=450;
		
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Name="The Selfish Gene";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Au_Name="Silent Spring";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id=204;	
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Price=2500;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Page=650;
		
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Name="The Double Helix";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Au_Name="James D. Watson";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id=205;	
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Price=3000;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Page=550;
		
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Name="The Elegant Universe";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Au_Name="Brian Greene";
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id=207;	
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Price=3700;
		Library[0].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Page=560;
		
		//********************************************************
		
		//OF SHELF_2 BOOKS
		
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Name="Physics of the Future";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Au_Name="Michio Kaku";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id=208;	
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Price=2100;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Page=450;
		
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Name="The Code Book";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Au_Name="Simon Singh";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id=209;	
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Price=3500;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Page=1450;
		
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Name="Genome";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Au_Name="Matt Ridley";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id=210;	
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Price=1500;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Page=650;
		
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Name="Longitude";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Au_Name=" Dava Sobel";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id=211;	
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Price=3100;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Page=750;
		
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Name="The Demon-Haunted World";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Au_Name="Carl Sagan";
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id=212;	
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Price=1700;
		Library[0].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Page=260;
		
		//********************************************************
		
		//OF SHELF_3 BOOKS
		
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Name="A Brief History of Time";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Au_Name="Stephen Hawking";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id=213;	
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Price=2200;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Page=700;
		
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Name="Cosmos";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Au_Name="Carl Sagan";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id=214;	
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Price=4500;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Page=1350;
		
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Name="The Selfish Gene";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Au_Name="Silent Spring";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id=215;	
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Price=900;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Page=250;
		
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Name="The Structure of Scientific Revolutions";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Au_Name="Thomas S. Kuhn";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id=217;	
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Price=3000;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Page=575;
		
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Name="The Elegant Universe";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Au_Name="Brian Greene";
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id=218;	
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Price=3700;
		Library[0].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Page=1060;
		
		//********************************************************
		
		// FOR ALL OF Library 2..
		
		Library[1].Lib_Id = 2;
		Library[1].Lib_Name = "Lahore Central Library"; 
		Library[1].Lib_City = "Lahore"; 
		Library[1].Lib_capacity = 600;
		Library[1].Lib_Type = "Public"; 
		Library[1].Lib_Fees = 1200;
		Library[1].Lib_Review = "Excellent";

		// OF SHELF 1
		
		Library[1].Shelfs_In_Lib[0].Shelf_Name = "A2";
		Library[1].Shelfs_In_Lib[0].Shelf_catogery = "Mathematics";
		Library[1].Shelfs_In_Lib[0].Shelf_Color = "Red";
		Library[1].Shelfs_In_Lib[0].Shelf_Id = 21;
		
		// ***********************************
		
		// OF SHELF 2
		
		Library[1].Shelfs_In_Lib[1].Shelf_Name = "B2";
		Library[1].Shelfs_In_Lib[1].Shelf_catogery = "Literature";
		Library[1].Shelfs_In_Lib[1].Shelf_Color = "Purple";
		Library[1].Shelfs_In_Lib[1].Shelf_Id = 22;
		
		// ***********************************
		
		// OF SHELF 3
		
		Library[1].Shelfs_In_Lib[2].Shelf_Name = "C2";
		Library[1].Shelfs_In_Lib[2].Shelf_catogery = "Computer Science";
		Library[1].Shelfs_In_Lib[2].Shelf_Color = "Blue";
		Library[1].Shelfs_In_Lib[2].Shelf_Id = 23;
		
		// ***********************************
		
		// OF SHELF_1 BOOKS
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Name = "Calculus for Beginners - Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Name = "Linear Algebra Explained - Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Name = "Number Theory Essentials - Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Name = "Probability and Statistics Handbook - Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Name = "Advanced Calculus Concepts - Mathematics";
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Au_Name = "John Doe";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Au_Name = "Jane Smith";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Au_Name = "David Williams";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Au_Name = "Maria Garcia";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Au_Name = "Michael Johnson";
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 301;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 302;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 303;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 304;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 305;
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Page = 600;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Page = 450;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Page = 700;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Page = 800;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Page = 900;
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Price = 2500;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Price = 1800;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Price = 3000;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Price = 3500;
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Price = 4000;
		
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_catogery = "Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_catogery = "Mathematics";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_catogery = "Literature";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_catogery = "Computer Science";
		Library[1].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_catogery = "Science";
		
		// ********************************************************

		// OF SHELF_2 BOOKS
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Name = "Classic Novels Collection - Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Name = "Modern Poetry Anthology - Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Name = "Shakespeare's Masterpieces - Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Name = "World Literature Classics - Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Name = "Contemporary Fiction Selection - Literature";
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Au_Name = "Emily Johnson";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Au_Name = "Christopher Lee";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Au_Name = "Sophia White";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Au_Name = "Daniel Brown";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Au_Name = "Emma Davis";
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 306;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 307;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 308;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 309;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 310;
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Page = 750;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Page = 1450;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Page = 650;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Page = 750;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Page = 260;
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Price = 3000;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Price = 3500;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Price = 1500;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Price = 3100;
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Price = 1700;
		
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_catogery = "Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_catogery = "Literature";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_catogery = "Science";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_catogery = "History";
		Library[1].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_catogery = "Science";
		
		// ********************************************************
	
		// OF SHELF_3 BOOKS
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Name = "Introduction to Algorithms - Computer Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Name = "Database Management Essentials - Computer Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Name = "Artificial Intelligence Basics - Computer Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Name = "Web Development Fundamentals - Computer Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Name = "Cybersecurity Essentials - Computer Science";
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Au_Name = "Robert Miller";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Au_Name = "Jessica Turner";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Au_Name = "Andrew Parker";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Au_Name = "Sophie Clark";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Au_Name = "William Evans";
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id = 311;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id = 312;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id = 313;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id = 314;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id = 315;
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Page = 700;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Page = 1350;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Page = 250;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Page = 2000;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Page = 1060;
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Price = 2200;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Price = 4500;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Price = 900;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Price = 6000;
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Price = 3700;
		
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_catogery = "Mathematics";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_catogery = "Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_catogery = "History";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_catogery = "Science";
		Library[1].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_catogery = "Science";
		
		// ********************************************************
		
		// FOR ALL OF Library 3..
		
		Library[2].Lib_Id = 3;
		Library[2].Lib_Name = "Islamabad City Library";
		Library[2].Lib_City = "Islamabad";
		Library[2].Lib_capacity = 800;
		Library[2].Lib_Type = "Public";
		Library[2].Lib_Fees = 1500;
		Library[2].Lib_Review = "Outstanding";
		
		// OF SHELF 1
		
		Library[2].Shelfs_In_Lib[0].Shelf_Name = "A3";
		Library[2].Shelfs_In_Lib[0].Shelf_catogery = "Physics";
		Library[2].Shelfs_In_Lib[0].Shelf_Color = "Green";
		Library[2].Shelfs_In_Lib[0].Shelf_Id = 31;
		
		// ***********************************
		
		// OF SHELF 2
		
		Library[2].Shelfs_In_Lib[1].Shelf_Name = "B3";
		Library[2].Shelfs_In_Lib[1].Shelf_catogery = "History";
		Library[2].Shelfs_In_Lib[1].Shelf_Color = "Brown";
		Library[2].Shelfs_In_Lib[1].Shelf_Id = 32;
		
		// ***********************************
		
		// OF SHELF 3
		
		Library[2].Shelfs_In_Lib[2].Shelf_Name = "C3";
		Library[2].Shelfs_In_Lib[2].Shelf_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[2].Shelf_Color = "Yellow";
		Library[2].Shelfs_In_Lib[2].Shelf_Id = 33;
		
		// ***********************************

		// OF SHELF_1 BOOKS
		
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Name = "Fundamentals of Mechanics - Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Name = "Quantum Physics Explained - Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Name = "Astrophysics Basics - Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Name = "Thermodynamics Handbook - Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Name = "Modern Physics Concepts - Physics";

		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Au_Name = "Sarah Robinson";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Au_Name = "Thomas Clark";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Au_Name = "Rachel Davis";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Au_Name = "Matthew Taylor";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Au_Name = "Olivia White";

		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 321;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 322;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 323;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 324;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 325;

		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Page = 500;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Page = 600;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Page = 700;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Page = 800;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Page = 900;

		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Price = 2000;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Price = 2500;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Price = 1800;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Price = 3000;
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Price = 3500;

		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_catogery = "Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_catogery = "Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_catogery = "Physics";
		Library[2].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_catogery = "Psychology";
		

	    // OF SHELF_2 BOOKS
	    
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Name = "World History Encyclopedia - History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Name = "Ancient Civilizations Overview - History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Name = "Renaissance Era Chronicles - History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Name = "Modern World History Guide - History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Name = "Political History Insights - History";

		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Au_Name = "George Adams";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Au_Name = "Emma Thompson";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Au_Name = "Charles Miller";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Au_Name = "Sophie Clark";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Au_Name = "William Evans";

		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 326;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 327;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 328;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 329;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 330;

		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Page = 750;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Page = 850;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Page = 950;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Page = 1050;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Page = 1150;

		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Price = 2800;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Price = 3200;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Price = 2000;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Price = 3500;
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Price = 4000;

		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_catogery = "History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_catogery = "History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_catogery = "History";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_catogery = "Politics";

		// OF SHELF_3 BOOKS
		
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Name = "Introduction to Psychology";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Name = "Cognitive Psychology Fundamentals";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Name = "Abnormal Psychology Exploration";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Name = "Social Psychology Dynamics";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Name = "Positive Psychology Insights";

		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Au_Name = "Jessica Turner";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Au_Name = "Andrew Parker";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Au_Name = "Sophie Clark";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Au_Name = "Daniel Brown";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Au_Name = "Emma Davis";

		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id = 331;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id = 332;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id = 333;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id = 334;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id = 335;

		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Page = 600;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Page = 700;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Page = 800;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Page = 900;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Page = 1000;

		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Price = 2500;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Price = 3000;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Price = 1800;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Price = 2200;
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Price = 2600;

		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_catogery = "Psychology";
		Library[2].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_catogery = "Psychology";
		
		// ********************************************************

		// FOR ALL OF Library 4..
		
		Library[3].Lib_Id = 4;
		Library[3].Lib_Name = "Karachi Metropolitan Library";
		Library[3].Lib_City = "Karachi";
		Library[3].Lib_capacity = 700;
		Library[3].Lib_Type = "Public";
		Library[3].Lib_Fees = 1300;
		Library[3].Lib_Review = "Superb";

		// OF SHELF 1
		
		Library[3].Shelfs_In_Lib[0].Shelf_Name = "A4";
		Library[3].Shelfs_In_Lib[0].Shelf_catogery = "Chemistry";
		Library[3].Shelfs_In_Lib[0].Shelf_Color = "Orange";
		Library[3].Shelfs_In_Lib[0].Shelf_Id = 41;
		
		// ***********************************
		

		// OF SHELF 2
		
		Library[3].Shelfs_In_Lib[1].Shelf_Name = "B4";
		Library[3].Shelfs_In_Lib[1].Shelf_catogery = "Art";
		Library[3].Shelfs_In_Lib[1].Shelf_Color = "Pink";
		Library[3].Shelfs_In_Lib[1].Shelf_Id = 42;
		
		// ***********************************

		// OF SHELF 3
		
		Library[3].Shelfs_In_Lib[2].Shelf_Name = "C4";
		Library[3].Shelfs_In_Lib[2].Shelf_catogery = "Economics";
		Library[3].Shelfs_In_Lib[2].Shelf_Color = "Grey";
		Library[3].Shelfs_In_Lib[2].Shelf_Id = 43;
		
		// ***********************************

		// OF SHELF_1 BOOKS
		
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Name = "Organic Chemistry Principles";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Name = "Inorganic Chemistry Fundamentals";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Name = "Physical Chemistry Essentials";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Name = "Biochemistry Basics";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Name = "Analytical Chemistry Techniques";
		
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Au_Name = "Alex Turner";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Au_Name = "Sophia Adams";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Au_Name = "Daniel White";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Au_Name = "Emily Davis";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Au_Name = "Michael Robinson";
		
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 401;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 402;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 403;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 404;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 405;

		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Page = 750;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Page = 850;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Page = 950;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Page = 1050;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Page = 1150;

		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Price = 2800;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Price = 3200;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Price = 2000;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Price = 3500;
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Price = 4000;

		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_catogery = "Chemistry";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_catogery = "Chemistry";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_catogery = "Chemistry";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_catogery = "Biology";
		Library[3].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_catogery = "Chemistry";

		// OF SHELF_2 BOOKS
		
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Name = "Art History Insights";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Name = "Modern Art Movements";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Name = "Famous Paintings Collection";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Name = "Sculpture Techniques Guide";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Name = "Contemporary Art Perspectives";

		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Au_Name = "Laura Turner";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Au_Name = "John Miller";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Au_Name = "Emma Brown";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Au_Name = "Christopher Lee";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Au_Name = "Sophie Clark";

		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 406;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 407;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 408;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 409;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 410;

		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Page = 600;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Page = 700;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Page = 800;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Page = 900;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Page = 1000;

		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Price = 2500;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Price = 3000;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Price = 1800;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Price = 2200;
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Price = 2600;

		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_catogery = "Art";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_catogery = "Art";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_catogery = "Art";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_catogery = "Art";
		Library[3].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_catogery = "Art";

		// OF SHELF_3 BOOKS
		
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Name = "Principles of Economics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Name = "Macroeconomics Basics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Name = "Microeconomics Insights";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Name = "Economic History Perspectives";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Name = "International Economics Fundamentals";

		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Au_Name = "David Williams";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Au_Name = "Maria Garcia";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Au_Name = "Robert Miller";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Au_Name = "William Evans";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Au_Name = "Jessica Turner";

		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id = 411;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id = 412;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id = 413;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id = 414;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id = 415;

		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Page = 750;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Page = 850;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Page = 950;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Page = 1050;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Page = 1150;

		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Price = 2800;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Price = 3200;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Price = 2000;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Price = 3500;
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Price = 4000;

		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_catogery = "Economics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_catogery = "Economics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_catogery = "Economics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_catogery = "Economics";
		Library[3].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_catogery = "Economics";
		
		// ********************************************************
    
		// FOR ALL OF Library 5..
		
		Library[4].Lib_Id = 5;
		Library[4].Lib_Name = "Islamabad Public Library";
		Library[4].Lib_City = "Islamabad";
		Library[4].Lib_capacity = 800;
		Library[4].Lib_Type = "Public";
		Library[4].Lib_Fees = 1400;
		Library[4].Lib_Review = "Outstanding";

		// OF SHELF 1
		
		Library[4].Shelfs_In_Lib[0].Shelf_Name = "A5";
		Library[4].Shelfs_In_Lib[0].Shelf_catogery = "Physics";
		Library[4].Shelfs_In_Lib[0].Shelf_Color = "Yellow";
		Library[4].Shelfs_In_Lib[0].Shelf_Id = 51;
		
		// ***********************************

		// OF SHELF 2
		
		Library[4].Shelfs_In_Lib[1].Shelf_Name = "B5";
		Library[4].Shelfs_In_Lib[1].Shelf_catogery = "Philosophy";
		Library[4].Shelfs_In_Lib[1].Shelf_Color = "Brown";
		Library[4].Shelfs_In_Lib[1].Shelf_Id = 52;
		
		// ***********************************

		// OF SHELF 3
		
		Library[4].Shelfs_In_Lib[2].Shelf_Name = "C5";
		Library[4].Shelfs_In_Lib[2].Shelf_catogery = "Political Science";
		Library[4].Shelfs_In_Lib[2].Shelf_Color = "Green";
		Library[4].Shelfs_In_Lib[2].Shelf_Id = 53;
		
		// ***********************************

		// OF SHELF_1 BOOKS
		
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Name = "Fundamentals of Physics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Name = "Quantum Mechanics Explained";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Name = "Astrophysics Essentials";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Name = "Nuclear Physics Basics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Name = "Electromagnetism Principles";

		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Au_Name = "William Taylor";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Au_Name = "Sophie Turner";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Au_Name = "Daniel Smith";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Au_Name = "Emma Robinson";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Au_Name = "Michael Brown";

		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Id = 501;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Id = 502;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Id = 503;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Id = 504;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Id = 505;

		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Page = 850;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Page = 950;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Page = 1050;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Page = 1150;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Page = 1250;

		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_Price = 3000;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_Price = 3500;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_Price = 2200;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_Price = 3700;
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_Price = 4200;

		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[0].Book_catogery = "Physics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[1].Book_catogery = "Physics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[2].Book_catogery = "Physics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[3].Book_catogery = "Physics";
		Library[4].Shelfs_In_Lib[0].Books_In_Shelf[4].Book_catogery = "Physics";

		// OF SHELF_2 BOOKS
		
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Name = "Philosophical Classics Collection";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Name = "Modern Philosophy Anthology";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Name = "Eastern Philosophy Insights";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Name = "Political Philosophy Essentials";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Name = "Existentialist Thought Perspectives";

		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Au_Name = "John Robinson";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Au_Name = "Sophia Miller";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Au_Name = "Daniel White";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Au_Name = "Emma Davis";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Au_Name = "Michael Turner";

		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Id = 506;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Id = 507;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Id = 508;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Id = 509;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Id = 510;

		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Page = 750;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Page = 850;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Page = 950;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Page = 1050;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Page = 1150;
		
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_Price = 3200;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_Price = 3700;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_Price = 2400;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_Price = 3800;
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_Price = 4200;

		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[0].Book_catogery = "Philosophy";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[1].Book_catogery = "Philosophy";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[2].Book_catogery = "Philosophy";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[3].Book_catogery = "Philosophy";
		Library[4].Shelfs_In_Lib[1].Books_In_Shelf[4].Book_catogery = "Philosophy";

		// OF SHELF_3 BOOKS
		
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Name = "Comparative Politics Essentials";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Name = "International Relations Basics";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Name = "Political Theory Fundamentals";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Name = "Public Administration Insights";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Name = "Global Governance Perspectives";

		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Au_Name = "David Smith";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Au_Name = "Maria White";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Au_Name = "Robert Turner";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Au_Name = "William Davis";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Au_Name = "Jessica Robinson";

		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Id = 511;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Id = 512;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Id = 513;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Id = 514;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Id = 515;

		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Page = 800;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Page = 900;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Page = 1000;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Page = 1100;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Page = 1200;

		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_Price = 3500;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_Price = 4000;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_Price = 2500;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_Price = 3900;
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_Price = 4300;

		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[0].Book_catogery = "Political Science";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[1].Book_catogery = "Political Science";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[2].Book_catogery = "Political Science";
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[3].Book_catogery = "Political Science";
		
		Library[4].Shelfs_In_Lib[2].Books_In_Shelf[4].Book_catogery = "Political Science";
		
		// ******************************************************** 
		
		cout<<"\t\t______________________WELCOME TO YOUR OWN LIBRARY SEARCHER___________________________ ";
		cout<<endl<<endl<<endl;
		
		int ans;
		do{
			
			
		
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
			cout<<"PRESS 18 for  update in values  ";
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
				
				case 18:{
					 
					int input_for_up;
						
					cout<<"Press 1 for updation through Library Id :  ";
					cout<<"\nPress 2 for updation through Shelf Id :  ";
					cout<<"\nPress 3 for updation through Book Id :  ";
					cout<<"\nSelect from the above options :  ";
					cin>>input_for_up;
					cout<<endl<<endl;
					if(input_for_up==1){
						int lib_up;
						cout<<"How many Library do you wannt to update : ";
						cin>>lib_up;
						for(int i=0 ; i<lib_up ; i++){
							cout<<"Enter new Library  Id for  "<< " Library " <<i+1<< " : ";
							cin>>Library[i].Lib_Id;
						}
					}
					break;
				}	
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					
					
					
					
					
					
				
				
				default : {
					cout<<"Enter number betweeen 1-18 >>";
					break;
				}
			}
			
			cout<<"\n\nDo you want to search any thing else enter 1 other wise 0  : ";
			cin>>ans;
			
		}while(ans==1);
			
		if(ans==0||ans==0)
		cout<<"\n\n\t\t THANK-YOU HAVE A NICE DAY :) ...";	
		
		
		
		
		return 0;
	}


	


