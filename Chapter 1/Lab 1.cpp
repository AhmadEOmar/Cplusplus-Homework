// File: Lab 1
// Created by Ahmad Omar on 8/20/2015

#include <cstdlib>
#include <iostream>
#include <fstream>
#include<iomanip> 
using namespace std;

	int main()
	{
		//Declaring Variables 
		float QuizGrade1 = 0;
		float QuizGrade2 = 0;
		float QuizGrade3 = 0;
		float LabGrade1 = 0;
		float LabGrade2 = 0;
		float LabGrade3 = 0;
		float LabGrade4 = 0;
		float MidtermGrade = 0;
		float FinalExamGrade = 0;
		float FinalGrade = 0;
		string StudentName = " ";
		float GradeLetter = 0;
		float FSG = 0;
		float QuizAverage = 0;
		float LabAverage = 0;
		
		
		//Gathering Input
			
		cout << "Enter Student Name: ";
		getline (cin,StudentName);
		
		cout << "Enter quiz grade 1: ";
		cin >> QuizGrade1;
		
		cout << "Enter quiz grade 2: ";
		cin >> QuizGrade2;
		
		cout << "Enter quiz grade 3: ";
		cin >> QuizGrade3;
		
		cout << "Enter lab grade 1: ";
		cin >> LabGrade1;
		
		cout << "Enter lab grade 2: ";
		cin >> LabGrade2;
		
		cout << "Enter lab grade 3: ";
		cin >> LabGrade3;
		
		cout << "Enter lab grade 4: ";
		cin >> LabGrade4;
		
		cout << "Enter Midterm Exam grade: ";
		cin >> MidtermGrade;
		
		cout << "Enter Final Exam grade: ";
		cin >> FinalExamGrade;
		
		QuizAverage = (QuizGrade1 + QuizGrade2 + QuizGrade3)/3;
		
		LabAverage = (LabGrade1 + LabGrade2+ LabGrade3+ LabGrade4) /4;
		
		FSG = (LabAverage)*(.50) + (QuizAverage)*(.10) + (MidtermGrade)*(.20) + (FinalExamGrade)*(.20);
		
		cout << setprecision (4);
		
	cout << "Your Final Semester Grade for the class is :" << FSG << endl;
	
	if (FSG >=90)
	{
		cout << "Your Final Semester letter Grade for the class is A"; 
	}
	else if (FSG >= 80 && FSG < 90)
	{
		cout << "Your Final Semester letter Grade for the class is B"; 
	}
	else if (FSG >= 70 && FSG < 80)
	{
		cout << "Your Final Semester letter Grade for the class is C";
	}
	else if (FSG >= 65 && FSG < 70)
	{
		cout << "Your Final Semester letter Grade for the class is D"; 
	}
	else
	{
		FSG < 65;
		cout << "Your Final Semster letter Grade for the class is F";
	}
	}
	
	
	
