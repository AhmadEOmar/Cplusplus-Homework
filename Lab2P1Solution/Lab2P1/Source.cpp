///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																																		///
// Filename: Lab2A.cpp																													///
// Date: February 1, 2016																												///
// Programmer: Ahmad Omar																												///
//																																		///
// Description: We had to gather the information from the student.dat file, and display it and rearange it to match a specific outcome. ///
//																																		///
//																																		///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

struct studentType
{

	string studentFName;
	string studentLName;
	double testScore;
	char grade;

};

studentType newStudents[20];
void studentData(ifstream&, studentType[]);
void studentGrades(ifstream&, studentType[]);
void highestTest(ifstream&, studentType[]);
void printHighest(ifstream&, studentType[]);

int main() {
	studentType students[20];
	ifstream infile;
	infile.open("student.dat", ios::in);

	//calling the functions
	studentData(infile, students);
	studentGrades(infile, students);
	highestTest(infile, students);
	printHighest(infile, students);

	infile.close();
}

void studentData(ifstream& infile, studentType newStudents[20])
{
	//grabing the studentinfo into a array 
	int i = 0;
	int pos;
	while (!infile.eof())
	{
		getline(infile, newStudents[i].studentFName);
		infile >> newStudents[i].testScore;
		infile.ignore();
		pos = newStudents[i].studentFName.find_last_of(' ');
		newStudents[i].studentLName = newStudents[i].studentFName.substr(pos + 1);
		newStudents[i].studentFName = newStudents[i].studentFName.substr(0, pos);
		studentGrades(infile, newStudents);
		cout << newStudents[i].studentLName << ", " << newStudents[i].studentFName << " " << newStudents[i].testScore << " " << newStudents[i].grade << endl;
		i++;
	}

}

void studentGrades(ifstream& infile, studentType newStudent[20])
{
	for (int i = 0; i < 20; i++)
	{
		if (newStudent[i].testScore >= 90)
		{
			newStudent[i].grade = 'A';
		}
		else if (newStudent[i].testScore >= 80 && newStudent[i].testScore < 90)
		{
			newStudent[i].grade = 'B';
		}
		else if (newStudent[i].testScore >= 70 && newStudent[i].testScore < 80)
		{
			newStudent[i].grade = 'C';
		}
		else if (newStudent[i].testScore >= 60 && newStudent[i].testScore < 70)
		{
			newStudent[i].grade = 'D';
		}
		else
		{
			newStudent[i].grade = 'F';

		}

	}

}

void highestTest(ifstream& infile, studentType newStudents[20])
{
	double highest;
	highest = newStudents[0].testScore;

	for (int i = 0; i < 20; i++)
	{
		if (newStudents[i].testScore >= highest)
			highest = newStudents[i].testScore;
	}

}

void printHighest(ifstream& infile, studentType newStudents[20])
{
	double highest;
	int index;
	highest = newStudents[0].testScore;

	for (int i = 0; i < 20; i++)
	{
		if (newStudents[i].testScore >= highest)
		{

			highest = newStudents[i].testScore;

			index = i;
		}
	}

	cout << newStudents[index].studentLName << " " << newStudents[index].studentFName << " " << highest << endl;
}