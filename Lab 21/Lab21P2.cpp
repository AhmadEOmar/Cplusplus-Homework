// File: Lab21P2.cpp
// Created by Ahmad Omar on 04/30/2015
// Program calculates 3 scores and convert them to letter grade

#include <cstdlib>
#include <iostream>
using namespace std;

// function prototype
double getScoresFindAverage();
void toLetterGrade(double);

int main()
{
	double average = 0.0;
	
	average = getScoresFindAverage();
	
	system("cls");
	
	cout << "Average score: " << average << endl;	
	toLetterGrade(average);
		
	system("pause"); 
	return 0;
}

double getScoresFindAverage()
{
	double midterm = 0.0;
	double final = 0.0;
	double project = 0.0;
	double average = 0.0;
		
	cout << "Enter midterm score: ";
	cin >> midterm;
	cout << "Enter final score: ";
	cin >> final;	
	cout << "Enter project score: ";
	cin >> project;	
	average = (midterm + final + project)/3;
	
	return average;
}

void toLetterGrade(double average)
{ 
	char courseGrade = ' ';
	if (average >= 90)
	{
		courseGrade = 'A';
	}
	else if (average >= 80 && average < 90)
	{
		courseGrade = 'B';
	}
	else if (average >= 70 && average < 80)
	{
		courseGrade = 'C';
	}
	else if (average >= 60 && average < 70)
	{
		courseGrade = 'D';
	}
	else if (average < 60)
	{
		courseGrade = 'F';
	}
	cout << "Course grade: " << courseGrade << endl;
}    

