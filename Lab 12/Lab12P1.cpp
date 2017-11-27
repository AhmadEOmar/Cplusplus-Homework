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
		cout << "Enter R for residential customer or B for business customer: ";
		cin >> letter;
		cout << "How many gallons of water were used? ";
		cin >> gallons;
		letter = toupper (letter);
		
		
		//Display Outcome
		if (gallons <= 8000 && letter == 'R')
		{
			
			totAmt = gallons * 0.004 ;
		}
		else
		{
			gallons > 8000 && letter == 'R';
			afterAmt = gallons - 8000;
			totAmt = (8000 * 0.004)+(afterAmt*0.007);
		}
		if (gallons <= 10000 && letter == 'B' )
		{
			
			totAmt = gallons * 0.005;
			
		}
		else
		{
			gallons > 10000 && letter == 'B';
			afterAmt = gallons - 10000;
			totAmt = (10000 * 0.005)+(afterAmt * 0.009);
		}
		cout << "Please pay this amount: $" << totAmt << endl;
}
