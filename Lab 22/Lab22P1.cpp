// File: Lab22P1.cpp
// Created by Ahmad Omar on 04/30/2015
// This program reads a product code from keyboard.

#include <cstdlib>
#include <iostream>
using namespace std;
// Function prototype
void getProductCode(string &);
int main()
{
		// Declare variables
		string productCode = "";
	
		// Call function getProductCode to request the product code 
         // and return the result to main
		getProductCode(productCode);
		
		// Display product code returned
		cout << "Product code read from keyboard: " << productCode << endl;

    		system("pause");
    		return 0;
}

// Function getProductCode: no parameters, returns requested user input
void getProductCode(string & code)
{
	bool valid = false;
	while (valid == false )
	{
		cout << "Enter the orange's 4-digit code. " << endl;
		cout << "The last digit must be either 4 or 7." << endl;
		cout << "Enter code here: ";
		cin >> code;
		if (code.length() == 4 && (code[3] == '4' || code[3] == '7'))
		{
			valid = true;
		}
		else
		{
			cout << "Invalid code.  Please try again." << endl;
		}
	}
	
}

