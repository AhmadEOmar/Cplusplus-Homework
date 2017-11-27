#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
		//Declare Variables
		char letter = ' ';
		double salary = 0.0;
		double bonus = 0.0;
		
		
		//Request Input
		cout << "Enter your current salary:" << endl;
		cin >> salary;
		cout << "Enter T if you are a teacher, or S if you are a state employee:" << endl;
		letter = toupper (letter);
		cin >> letter;
		
		
		//Display Outcome
		if (letter == 'T')
		{
			cout << "You will receive one-time bonus of $100 and a raise of $1200" << endl;
			bonus = 100;
			salary = salary + bonus + 1200;
			cout << salary << endl;
			}	
		else {
			letter == 'S';
			cout << "You will receive one-time bonus of $200 and a raise of $400" << endl;
			bonus = 200;
			salary = salary + bonus + 400;
			cout << salary << endl;
		
		}
	
}

