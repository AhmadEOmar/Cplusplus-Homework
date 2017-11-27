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
		double largeNum = 0.0;
		double averageNum = 0.0;
		
		//Request Input
		cout << "First score: ";
		cin >> num1;
		cout << "Second score: ";
		cin >> num2;
		cout << "Third score: ";
		cin >> num3;
		cout << "Fourth score: ";
		cin >> num4;
		cout << "Fifth score: ";
		cin >> num5;
		
		smallNum = num1;
		largeNum = num1;
		
		//Display Outcome
		if (num2 > largeNum)
		{
			largeNum = num2;	
		}	
		if (num2 < smallNum)
		{
			smallNum = num2;
		}
		if (num3 > largeNum)
		{
			largeNum = num3;
		}
		if (num3 < smallNum)
		{
			smallNum = num3;
		}
		if (num4 > largeNum)
		{
			largeNum = num4;
		}
		if (num4 < smallNum)
		{
			smallNum = num4;
		}
		if (num5 > largeNum )
		{
			largeNum = num5;
		}
		if (num5 < smallNum)
		{
			smallNum = num5;
		}
		averageNum = (num1 +num2 +num3 + num4 +num5 -(largeNum+smallNum)) /3 ;
		cout << "Lowest score: " << smallNum << endl;
		cout << "Highest score: " << largeNum << endl;
		cout << "Average score with highest score and lowest score excluded: " << averageNum << endl;
		
}
