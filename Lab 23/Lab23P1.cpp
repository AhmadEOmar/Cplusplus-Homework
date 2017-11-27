// File: Lab23P1.cpp
// Created by Ahmad Omar on 4/21/15
// This program reads and displays salary of 6 workers

#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{		
double salary[6];
	
for (int i=0;i<6;i=i+1)
{
	salary[i]=0.0;

}
	
	// Request array input
  	cout << "You will be asked to enter the salary for 6 workers."<< endl;
	
	
for (int i=0;i<6;i=i+1)
{
	//Gather Input
	
	cout << "Enter salary for a worker: ";
	cin >> salary[i];
	
}

	cout << endl;
	
for (int i=0;i<6;i=i+1)
{
	cout << "The salaries you entered are: ";
	cout << salary[i] << endl; 
}


	system("pause"); 
	return 0;
}


