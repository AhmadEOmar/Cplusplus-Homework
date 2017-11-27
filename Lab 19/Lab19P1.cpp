// File: Lab19P1.cpp
// Created by Ahmad Omar on 04/029/2015
// This program display a description of CIS115

#include <cstdlib>
#include <iostream>
using namespace std;

// insert function prototype statement here
void courseDescription();

int main()
{
    // insert statement here to invoke the function courseDescription
	courseDescription();
	    
    system("pause");
    return 0;
}

void courseDescription()
{
    	cout << "This course introduces computer programming "  	<< endl;
	 	cout << "and problem solving in a structured program "   	<< endl;
	 	cout << "logic environment. Topics include language "     	<< endl;
    	cout << "syntax, data types, program organization, "       	<< endl;
	 	cout << "problem solving methods, algorithm design, "       << endl;
	 	cout << "and logic control structures. Upon completion, "   << endl;
	 	cout << "students should be able to manage files with " 	<< endl;
	 	cout << "operating system commands, use top-down " 		    << endl;
    	cout << "algorithm design, and implement algorithmic " 	    << endl;
		cout << "solutions in a programming language."             	<< endl;
}

