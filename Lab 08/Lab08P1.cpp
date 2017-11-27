#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		double childTax = 0.0;
		double totIncome = 0.0;
		double children = 0.0;
	
		//Request Input
		cout << "How much is the household income?" << endl;
		cin >> totIncome;
		cout << "How many children are in the household?" << endl;
		cin >> children;
		
		
		//Display Outcome
		
		if (totIncome > 70000 && children > 4)
		{
			cout << "This household generates enough income you will only recieve $4500 max  if you have more than 4 children" << endl;
			childTax = 4500;
			cout << childTax << endl; 
		}
		else
		{
			totIncome <70000;
			cout << "You shall reviece $1000 per child." << endl;
			childTax = children * 1000;
			totIncome = childTax;
			cout << "Total income recieved" << endl;
			cout << totIncome << endl;
			
		}
		
	
	
	
	
	
}
