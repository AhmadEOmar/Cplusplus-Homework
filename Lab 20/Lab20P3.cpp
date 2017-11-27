// File: Lab20P3.cpp
// Created by Ahmad Omar on 04/29/2015
// Program to calculate target heart rate during fitness training 

#include <cstdlib>
#include <iostream>
using namespace std;

void heartRateCalculator(int,double);

int main()
{
	int age= 0;
	double rest=0.0;
	
	cout<<"Enter age: ";
	cin>> age;
	cout<<"Enter resting heart rate: ";
	cin>> rest;
	cout<<endl;
	
	heartRateCalculator(age,rest);
	
	system("pause");
    	return 0;
}
void heartRateCalculator(int age,double rest)
{
	double target=0.0;
	target=(220-age-rest)*.4 + rest;
	
	cout<<"Target heart rate: " << target << endl << endl;
}

