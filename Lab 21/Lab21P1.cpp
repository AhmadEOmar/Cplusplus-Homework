// File: Lab21P1.cpp
// Created by Ahmad Omar on 04/30/2015
// Program to determine number of buses needed for feild trip 

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double student=0.0;
	double bus=0.0;
	
	cout <<"Enter the number of students going on the trip: ";
	cin >> student;
	
	system("cls");
	
	bus=student/24;
	
	if(bus < ceil(bus))
	{
		bus=static_cast<int>(bus)+1;
	}
	cout <<"Number of activity buses needed: "<<bus<<endl<<endl;
	system("pause");
    	return 0;
}

