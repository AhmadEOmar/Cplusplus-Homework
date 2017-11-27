#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
		//Declare Variables
		char letter = ' ';
		double length = 0.0;
		double width = 0.0;
		double height = 0.0;
		double BTU = 0.0;
		
		
		
		//Request Input
		cout << "Enter room length:" << endl;
		cin >> length;
		cout << "Enter room width:" << endl;
		cin >> width;
		cout << "Enter room height:" << endl;
		cin >> height;
		cout << "Does the room recieve sunlight" << endl;
		cin >> letter;
		letter = toupper(letter);
			
		
		//Calculation
		BTU = length * width * height * 3.5;
	
		//Display Outcome
		if (letter == 'Y')
		{
			cout << "You need to increase BTU by 20%" << endl;
			BTU = BTU * .20 + BTU;
		}	
		
			cout << "Total BTU needed:" << endl;
			cout << BTU << endl;
		
		
		
	
}

