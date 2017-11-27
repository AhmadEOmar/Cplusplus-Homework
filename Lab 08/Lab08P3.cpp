#include <cstdlib>
#include <iostream>  
using namespace std;

int main()
{
	//Declare Variables
	double creditHours = 0.0;
	double GPA = 0.0;
		
	
		//Request Input
		cout << "How many credits hours have been completed?" << endl;
		cin >> creditHours;
		cout << "What is the GPA?" << endl;
		cin >> GPA;
		
		
		//Display Outcome
		
		if (creditHours >= 24 && GPA >= 3.75)
		{
			cout << "You are able to join the honor society!" << endl;
			 
		}
		else if (creditHours >= 36 && GPA >= 3.5)
		{
			cout << "You are able to join the honor society!" << endl;
			
		}
		else 
		{
			creditHours < 24 && GPA < 3.75 || creditHours < 36 && GPA < 3.5;
			cout << "Sorry you are unable to join the honor socitey." << endl;
			
		}
		
	
	
	
	
	
}
