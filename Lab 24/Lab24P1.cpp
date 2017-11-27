// File: Lab24P1.cpp
// Created by Ahmad Omar on 4/21/15
// This program reads and displays salary of 6 workers

#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{		
//Variables 
double students[8];
double counter = 0;
	
for (int i=0;i<8;i=i+1)
{
	students[i]=0.0;

}
	
	// Request array input
  	
		cout << "You will be asked to enter the number of students";
		cout << "taking the exam on each day in the 8-day period." << endl;
	
	for (int i=0;i<8;i=i+1)
	{
		//Gather Input 
		cout << "Enter number of students: ";
		cin >> students[i];

	}

	
		cout << endl;
		cout << "Number of days having 10 or more students taking the exam: ";
		
	for (int i=0;i<8;i=i+1)
	{

		if (students[i] >= 10 )
		{
			counter = counter +1;
		}
	}	
	cout << counter << endl;

	system("pause"); 
	return 0;
}
