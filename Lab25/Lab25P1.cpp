// File: Lab25P1.cpp
// Created by Ahmad Omar on 4/28/15


#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{		
//Variables 
string college = "";
int collegeLength = 0;

cout << "Please enter college name with spaces replaced by underscores: ";
cin >> college;

collegeLength = college.length();

for (int i =0; i < collegeLength; i = i + 1)
{
	if (college[i] == '_')
	{
		college[i] = ' ';
	}
}


cout << "College: " << college << endl;


}
