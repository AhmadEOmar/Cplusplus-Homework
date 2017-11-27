#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
		//Declare Variables
		char letter = ' ';
		double gallons = 0.0;
		double totAmt = 0.0;
		double afterAmt = 0.0;
		
		
		
		//Request Input
		cout << "Enter Customer type [Enter R for residential or B for business]: ";
		cin >> letter;
		cout << endl;
		cout << "Enter number of gallons of water used: ";
		cin >> gallons;
		cout << endl;
		letter = toupper (letter);
		
		
		//Display Outcome
		if (gallons <= 5000 && letter == 'R' )
		{
			
			totAmt = gallons * 0.01;
			
		}
		else
		{
			gallons > 5000 && letter == 'R';
			afterAmt = gallons - 5000;
			totAmt = (5000 * 0.01)+(afterAmt * 0.015);
		}
		if (gallons <= 10000 && letter == 'B' )
		{
			
			totAmt = gallons * 0.02;
			
		}
		else
		{
			gallons > 10000 && letter == 'B';
			afterAmt = gallons - 10000;
			totAmt = (10000 * 0.02)+(afterAmt * 0.025);
		}
		cout << "Charge: " << totAmt << endl;
}
