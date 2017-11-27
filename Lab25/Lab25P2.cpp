// File: Lab25P2.cpp
// Created by Ahmad Omar on 4/28/15


#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{		
//Variables 
char type = ' ';
char color = ' ';
string code = "";

cout << "Choose furniture type" << endl;
cout << "Please enter C for chair or T for table: ";
cin >> type;
type = toupper(type);
cout << "Choose color type" << endl;
cout << "Please enter R for red, B for black or G for green: ";
cin >> color;
color = toupper(color);

if (type == 'C')
{
	code = "C47";
}
else if (type == 'T')
{
	code = "T47";
}
if (color == 'R')
{
	code = code + "41";
}
else if (color == 'B')
{
	
	code = code + "25";
}
else if (color == 'G')
{
	code = code + "30";
}
if (code.length ()==5)
{
	cout << "Product code: " << code << endl;
}
else
{
	cout << "Invalid choice of furniture or color.:" << endl;
}
	system("Pause");
	return 0;
}

