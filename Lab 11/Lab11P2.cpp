#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		double num1 = 0.0;
		double num2 = 0.0;
		double num3 = 0.0;
		double num4 = 0.0;
		double num5 = 0.0;
		double smallNum = 0.0;
		
		//Request Input
		cout << "First number: ";
		cin >> num1;
		cout << "Second number: ";
		cin >> num2;
		cout << "Third number: ";
		cin >> num3;
		cout << "Fourth number: ";
		cin >> num4;
		cout << "Fifth Number: ";
		cin >> num5;
		
		smallNum = num1;
		
		//Display Outcome
		if (num2 < smallNum)
		{
			smallNum = num2;	
			}	
		if (num3 < smallNum)
		{
			smallNum = num3;
		}
		if (num4 < smallNum)
		{
			smallNum = num4;
			
		}
		if (num5 < smallNum)
		{
			smallNum = num5;
		}
		
		cout << "Smallest Number: " << smallNum << endl;
		
}
