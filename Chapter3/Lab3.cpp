// File: Lab 3
// Created by Ahmad Omar on 9/10/2015
//Using Math to solve a problem

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>
#include <cassert>
using namespace std;

int main (){
	
	int a = 0.0;
	int b = 0.0;
	int c = 0.0;
	double discriminant = 0.0;
	double root1 = 0.0;
	double root2 = 0.0;
		
	
	//Getting input from user
	cout << "Enter the coefficient for a = ",
	cin >> a;
	
	cout << "Enter the coefficient for b = ";
	cin >> b;
	
	cout << "Enter the coefficient for c = ";
	cin >> c;
	
	
	//Calculating input
	discriminant = b * b - 4 * a * c;
	
	//assert
	assert(a != 0 && discriminant >= 0);
	
	//Find out equation root type
	if (discriminant > 0)
	{
		cout << "This equation will have 2 real roots." << endl;
		root1 = (-b + sqrt (discriminant)) / (2*a);
		root2 = (-b - sqrt (discriminant)) / (2*a);
		cout << "The values are: " << root1 << root2 << endl;
			
	}
	else if (discriminant ==0 )
	{
		cout << "This equation will have a single root." << endl;
		root1 = (-b) / (2 * a);
		cout << "The single root is: " << root1 << endl;
	}
	else 
	{
		cout << "This equation will have 2 complex roots." << endl;
	}	
	
	
}
