// File: Lab26P3.cpp
// Created by Ahmad Omar on 05/06/2015

 #include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
	int workerId = 0;
	double hourlyRate=0.0;
	double hoursWrk=0.0;
	double pay=0.0;
	

	ifstream workersData;
	workersData.open("workers.txt", ios::in);

	if (workersData.is_open())
	{
		for (int count=0; count<8; count=count++)
		{
			workersData>>workerId>>hourlyRate>>hoursWrk;
			pay=hourlyRate*hoursWrk;
			
			cout<<"Worker ID: "<<workerId<<"   Gross pay: "<<pay<<endl;
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

