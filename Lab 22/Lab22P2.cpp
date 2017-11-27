// File: Lab22P2.cpp
// Created by Ahmad Omar on 04/19/2015
// This program reads a number from keyboard.
// It uses two functions to calculate new salary after 5% raise and 10% raise. 

#include <cstdlib>
#include <iostream>
using namespace std;

void fivePercentRaise(double );
void tenPercentRaise(double );

int main()
{
	double salary = 0.0;
	
	cout << "Please enter current salary: ";
	cin >> salary;
	
	fivePercentRaise(salary);
	tenPercentRaise(salary);	

    system("pause");
    return 0;
}

void fivePercentRaise(double  sal)
{
	sal = sal + sal * 0.05;
	cout << "New salary if you receive a 5% raise: " << sal << endl;
}

void tenPercentRaise(double  sal)
{
	sal = sal + sal * 0.10;
	cout << "New salary if you receive a 10% raise: " << sal << endl;
}    

