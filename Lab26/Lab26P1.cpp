// File: Lab26P1.cpp
// Created by Ahmad Omar on 05/06/2015

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int workerId=0;
	double hourlyRate=0.0;
	double hoursWrk=0.0;
	
	ofstream workersData;
	workersData.open("workers.txt", ios::out);
	
	if (workersData.is_open())
	{
		for(int count=0; count<5; count=count++)
		{
			cout<<"Worker ID :";
			cin>> workerId;
			cout<<"Hourly Rate :";
			cin>> hourlyRate;
			cout<<"Houres Worked :";
			cin>> hoursWrk;
			
			workersData<<workerId<<" "<<hoursWrk<<endl;
		}
		workersData.close();
	}
	else
	{
		cout<<"The file could not be opened."<<endl<<endl;
	}
	
	system("pause");
    	return 0;
}


