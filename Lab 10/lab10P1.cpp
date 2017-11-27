#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		char letter = ' ';
		double healthPlan = 0.0;
		
		//Request Input
		cout << "Enter E if you want to cover employee only" << endl;
		cout << "Enter S if you want to cover employee and spouse" << endl;
		cout << "Enter C if you want to cover employee and children" << endl;
		cout << "Enter F if you want to cover the whole family" << endl;
		letter = toupper (letter);
		cout << "Health plan choice:";
		cin >> letter;
		
		//Display Outcome
		if (letter == 'E')
		{
			healthPlan = 40;
			cout << "The premium is $" << healthPlan << endl;
					
			}	
		else if (letter == 'S')
		{
			healthPlan = 160;
			cout << "The premium is $" << healthPlan << endl;
	
		}
		else if (letter == 'C')
		{
			healthPlan = 200;
			cout << "The premium is $" << healthPlan << endl;
		}
		else if (letter == 'F')
		{
			healthPlan = 250;
			cout << "The premium is $" << healthPlan << endl;
		}
		else 
		{ 
		letter != 'E' | letter != 'S' | letter != 'C' | letter != 'F';
		
		cout << "Invalid health plan code" << endl;
		
		}
	
		
	
}
		
