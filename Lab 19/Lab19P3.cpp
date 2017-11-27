// File: Lab19P3.cpp
// Created by Ahmad Omar on 04/29/2015
// This program simulates a hierarchical voice mail system

#include <cstdlib>
#include <iostream>
using namespace std;

void progDept(double);
void dbaDept(double);
void gameDept(double);

int main()
{
    	// Declare variables 
		double deptChoice = 0;
   		double instChoice = 0;
    
    cout << "Thank you for calling the Computer Technologies Division." << endl;
    cout << "Press 1 for Programming department" << endl;
    cout << "Press 2 for Database Management department" << endl;
    cout << "Press 3 for Game Development department" << endl;
    cout << "Press any other number to go to the secretary" << endl;
    cin >> deptChoice;
    
    if (deptChoice == 1)
    {
       progDept (instChoice);
    }
    else if (deptChoice == 2)
    {
    	dbaDept (instChoice);
    }
    else if (deptChoice == 3)
    {
    	gameDept (instChoice);
    }
    else
    {
        cout << "You have reached the voicemail of the secretary." << endl;
        cout << "Please leave a message after the beep." << endl;
    }
    
    system("pause");
    return 0;
}
void progDept(double instChoice)
{
		cout << "You have reached the Programming Department." << endl;
        cout << "Press 1 for Al Molin" << endl;
        cout << "Press 2 for Witold Sieradzan" << endl;
        cout << "Press 3 for Hong Cui" << endl;
        cout << "Press 4 for Mary Orazem" << endl;
        cout << "Press 5 for Hillary Paul" << endl;
        cout << "Press any other number to go to the secretary" << endl;
        cin >> instChoice;
        if (instChoice == 1)
        {
            cout << "You have reached the voicemail of Al Molin." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 2)
        {
            cout << "You have reached the voicemail of Witold Sieradzan." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 3)
        {
            cout << "You have reached the voicemail of Hong Cui." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 4)
        {
            cout << "You have reached the voicemail of Mary Orazem." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 5)
        {
            cout << "You have reached the voicemail of Hillary Paul." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else
        {
            cout << "You have reached the voicemail of the secretary." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
}
void dbaDept (double instChoice)
{
	    cout << "You have reached the Database Management Department." << endl;
        cout << "Press 1 for Peter Chen" << endl;
        cout << "Press 2 for Frank Chao" << endl;
        cout << "Press any other number to go to the secretary" << endl;
        cin >> instChoice;
        if (instChoice == 1)
        {
            cout << "You have reached the voicemail of Peter Chen." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 2)
        {
            cout << "You have reached the voicemail of Frank Chao." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else
        {
            cout << "You have reached the voicemail of the secretary." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
}
void gameDept(double instChoice)
{
		cout << "You have reached the Game Development Department." << endl;
        cout << "Press 1 for Cindy Foster" << endl;
        cout << "Press 2 for Brad Sewaringen" << endl;
        cout << "Press 3 for Brandon Crews" << endl;
        cout << "Press any other number to go to the secretary" << endl;
        cin >> instChoice;
        if (instChoice == 1)
        {
            cout << "You have reached the voicemail of Cindy Foster" << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 2)
        {
            cout << "You have reached the voicemail of Brad Sewaringen." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else if (instChoice == 3)
        {
            cout << "You have reached the voicemail of Brandon Crews." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
        else
        {
            cout << "You have reached the voicemail of the secretary." << endl;
            cout << "Please leave a message after the beep." << endl;
        }
}
