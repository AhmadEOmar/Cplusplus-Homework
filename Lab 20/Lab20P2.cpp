// File: Lab20P2.cpp
// Created by Ahmad Omar on 04/29/2015
// Progran to convert US dollar to Japanese yen 

#include <cstdlib>
#include <iostream>
using namespace std;

void convertToYen(double,double);

int main()
{
	double dollar= 0.0;
	double rate  = 0.0;
	
	cout<<"Enter amount in US dollars: $";
	cin>> dollar;
	cout<<"Enter conversion rate: $";
	cin>> rate;
	
	convertToYen(dollar,rate);
		
		system("pause");
		return 0;
}
void convertToYen(double dollar,double rate)
{
	double yen = 0.0;
	yen=dollar*rate;
	
	cout<<"Equivalent amount in Japanese yen: $" <<yen<<endl<<endl;
}
