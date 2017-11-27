#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		char p1Letter = ' ';
		char p2Letter = ' ';
		
		//Request Input
		cout << "Player 1: Enter R for rock, P for paper or S for scissors ";
		cin >> p1Letter;
		cout << "Player 2: Enter R for rock, P for paper or S for scissors ";
		cin >> p2Letter;
		p1Letter = toupper (p1Letter);
		p2Letter = toupper (p2Letter);		
		
		if (p1Letter == 'R' && p2Letter == 'S' )
		{
			cout << "Player 1 has won the game!" << endl;
			
		}
		else if (p1Letter == 'P' && p2Letter == 'R')
		{
			cout << "Player 1 has won the game!" << endl;
		}
		else if (p1Letter == 'S' && p2Letter == 'P')
		{
			cout << "Player 1 has won the game!" << endl;
		}
		else if (p2Letter == 'R' && p1Letter == 'S')
		{
			cout << "Player 2 has won the game!" << endl;
		}
		else if (p2Letter == 'P' && p1Letter == 'R')
		{
			cout << "Player 2 has won the game!" << endl;
		}
		else if (p2Letter == 'S' && p1Letter == 'P')
		{
			cout << "Player 2 has won the game!" << endl;
		}
		else if ((p1Letter == 'S' && p2Letter == 'S') || (p1Letter == 'R' && p2Letter == 'R') || (p1Letter == 'P' && p2Letter == 'P'))
		{
			cout << "Tie" << endl;
		}
		else 
		{
			cout << "Game canceled because of invalid entry" << endl;
		}

}
		

