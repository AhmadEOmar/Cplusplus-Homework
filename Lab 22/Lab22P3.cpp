// File: Lab22P3.cpp
// Created by Ahmad Omar on 04/30/2015
// Program to compare numbers and determine which is smaller and which is larger

#include <cstdlib>
#include <iostream>
using namespace std;

void compareNums (double,double,double &,double &);

int main ()
{
	double one=0.0;
	double two=0.0;
	double larger=0.0;
	double lower=0.0;
	
	cout<<"Please enter a number: ";
	cin>>one;
	cout<<"Please enter another number: ";
	cin>>two;
	
	compareNums (one,two,larger,lower);
	
	system("cls");
	cout<<"The larger number is: "<<larger<<endl;
	cout<<"The smaller number is: "<<lower<<endl<<endl;
	
	system("pause");
	return 0;
}

void compareNums (double a,double b, double & high,double & low)
{
	if (a>b)
	{
		high=a;
		low=b;
	}
	else if (b>a)
	{
		high=b;
		low=a;
	}
	else
	{
		high=a;
		low=b;
	}
}

