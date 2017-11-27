// File: Lab20P1.cpp
// Created by Ahmad Omar on 04/29/2015
// This program determines whether a child needs a booster seat

#include <cstdlib>
#include <iostream>
using namespace std;

void boosterSeat(double,double);

int main()
{    	
		// Declare variables
		double age = 0.0;
    	double weight = 0.0;
    
		// Request input
    		cout << "Please enter child's age: ";
    		cin >> age;   
    		cout << "Please enter child's weight: ";
    		cin >> weight;   
    		
    		boosterSeat(age,weight);
    
    		system ("pause");
    		return 0;
}

void boosterSeat (double age, double weight)
{
     	if (age >= 8 || weight > 70)
     	{
         		cout << "This child does not need booster seat." << endl;
     	}
     	else
     	{
         		cout << "This child needs booster seat." << endl;
     	}        
}

