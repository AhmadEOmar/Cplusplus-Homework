// File: Lab 2
// Created by Ahmad Omar on 8/27/2015
//Make changes to a prexisting file and add to it

#include <cstdlib>
#include <iostream>
#include <fstream>
#include<iomanip> 
using namespace std;

	int main()
	{
		//Using ifstream to open up the house_repair.dat file
		
		ifstream inData;
		
		inData.open("C:\\Users\\AhmadEOmar\\Desktop\\School\\C++Programming\\Chapter3\\house_repairs.dat");
		
		double KitchenCost =0;
		double BathroomCost =0;
		double FlooringCost =0;
		double LandscapeCost =0;
		double PaintingCost =0;
		double PlumbingCost =0;
		double LightCost =0;
		double TotalCost = 0;
		
	
		//string nextline;
		
		//Accessing the information from the file
		//Using the ignore statment twice to bypass the invisble characters in the notepad 
		
		cout << setprecision (2) << fixed; 
		cout << "Purchase price of the investment property: $47500.00" << endl << endl;
		cout << "List of Expenses" << endl;
		inData.ignore(100, '\n');
			inData >> KitchenCost;
			cout << "Cost of repairing kitchen: $";
			cout << KitchenCost << endl;
			inData.ignore(100, '\n');
			inData.ignore(100, '\n');
				inData >> BathroomCost;
				cout << "Cost of repairing bathrooms: $";
				cout << BathroomCost << endl;
				inData.ignore(100, '\n');
				inData.ignore(100, '\n');
					inData >> FlooringCost;
					cout << "Cost of repairing floors: $";
					cout << FlooringCost << endl;
					inData.ignore(100, '\n');
					inData.ignore(100, '\n');
						inData >> LandscapeCost;
						cout << "Cost of lanscape: $";
						cout << LandscapeCost << endl;
						inData.ignore(100, '\n');
						inData.ignore(100, '\n');
							inData >> PaintingCost;
							cout << "Cost of painting: $";
							cout << PaintingCost << endl;
							inData.ignore(100, '\n');
							inData.ignore(100, '\n');
								inData >> PlumbingCost;
								cout << "Cost of repairing the plumbing: $";
								cout << PlumbingCost << endl;
								inData.ignore(100, '\n');
								inData.ignore(100, '\n');
									inData >> LightCost;
									cout << "Cost of repairing the light fixtures: $";
									cout << LightCost << endl;
		
		//Factoring in the information for the program
		
		TotalCost = (KitchenCost+BathroomCost+FlooringCost+LandscapeCost+PaintingCost+PlumbingCost+LightCost)+47500;
		cout << "The sale price of the property should be: $" << TotalCost << endl;
	
		inData.close();
		
	}
		
		
		

