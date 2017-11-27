#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		double numCopies = 0.0;
		double unitPrc = 0.0;
		double totPrc = 0.0;
		
		
		//Request Input
		cout << "How many copies are you buying? ";
		cin >> numCopies;
		
		
		
		//Display Outcome
		if ((numCopies >= 1) && (numCopies <=10))
		{
			unitPrc = 99;
			cout << "Unit price: $" << unitPrc << endl;
			totPrc = unitPrc * numCopies;
			cout << "Total Price is $" << totPrc << endl;
					
			}	
		else if ((numCopies >= 11) && (numCopies <= 50))
		{
			unitPrc = 89;
			cout << "Unit price: $" << unitPrc << endl;
			totPrc = unitPrc * numCopies;
			cout << "Total price is $" << totPrc << endl;
	
		}
		else if ((numCopies >= 51) && (numCopies <= 100))
		{
			unitPrc = 79;
			cout << "Unit price: $" << unitPrc << endl;
			totPrc = unitPrc * numCopies;
			cout << "Total price is $" << totPrc << endl;
		}
		else
		{
			numCopies >= 101;
			unitPrc = 69;
			cout << "Unit price: $" << unitPrc << endl;
			totPrc = unitPrc * numCopies;
			cout << "Total price is $" << totPrc << endl;
		}
		
}

