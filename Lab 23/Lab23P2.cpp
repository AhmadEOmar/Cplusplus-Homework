// File: Lab23P2.cpp
// Created by Ahmad Omar on 4/21/15
// This program reads and displays salary of 6 workers

#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{		
//Variables 
double balance[5];
double total = 0.0;
	
for (int i=0;i<5;i=i+1)
{
	balance[i]=0.0;

}
	
	// Request array input
  	
		cout << "You will be asked to enter the balance of 5 savings accounts."<< endl;
	
	for (int i=0;i<5;i=i+1)
	{
		//Gather Input 
		cout << "Enter balance of an account: ";
		cin >> balance[i];

	}

	cout << endl;
	cout << "Balances entered: " << endl;
	
	for (int i=0;i<5;i=i+1)
	{
		//Display Output
		cout << balance[i] << endl; 
		total = total + balance[i];
	
	}
		cout << endl;
		cout << "Total: " << total << endl;
		cout << endl;
		cout << "Apply $10 fee for accounts with balance below $500" << endl;
		cout << "New balances: " << endl;
	
	for (int i=0;i<5;i=i+1)
	{
		//Calculate new balance for thoes under $500

		if (balance[i] < 500 )
		{
		balance[i] = balance[i]-10;
		}
		cout << balance[i] << endl;
}
	

	system("pause"); 
	return 0;
}
