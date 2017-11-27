// File: Lab19P2.cpp
// Created by Ahmad Omar on 04/29/2015
// This program calculates volume

#include <cstdlib>
#include <iostream>
using namespace std;

void findVolume();

int main()
{
	    findVolume();
		
    	system("pause");
    	return 0;
}	
// Declare variables
			
	void findVolume()
		{
		
			double length = 0.0;
			double width = 0.0;
			double height = 0.0;
			double volume = 0.0;
	
			// Request input
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
			cout << "Enter height: ";
			cin >> height;

			// Calculate volume and display it
			volume = length * width * height;
			cout << "Volume : " << volume << endl;
		}
