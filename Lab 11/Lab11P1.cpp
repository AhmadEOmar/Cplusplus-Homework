#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
		double andyVotes = 0.0;
		double briannaVotes = 0.0;
		double chuckVotes = 0.0;
		
		
		//Request Input
		cout << "How many votes did Andy receive? ";
		cin >> andyVotes;
		cout << "How many votes did Brianna receive? ";
		cin >> briannaVotes;
		cout << "How many votes did Chuck receive? ";
		cin >> chuckVotes;
		
		
		
		//Display Outcome
		if ((andyVotes > briannaVotes) && (andyVotes > chuckVotes))
		{
			cout << "Andy has won the election." << endl;		
			}	
		else if ((briannaVotes > andyVotes) && (briannaVotes > chuckVotes))
		{
			cout << "Brianna has won the election." << endl;
		}
		else if ((chuckVotes > andyVotes) && (chuckVotes > briannaVotes) )
		{
			cout << "Chuck has won the election" << endl;
			
		}
		else if ((andyVotes == briannaVotes) && (andyVotes > chuckVotes))
		{
			cout << "Andy and Brianna have tied for first place" << endl;
		}
		else if ((andyVotes == chuckVotes) && (chuckVotes > briannaVotes))
		{
			cout << "Andy and Chuck have tied for first place" << endl;
		}
		else if ((briannaVotes == chuckVotes) && (briannaVotes > andyVotes))
		{
			cout << "Brianna and Chuck have tied for first place" << endl;
		}
		else 
		{
			cout << "Andy, Brianna and Chuck have tied for first place" << endl;
		}
		
		
}

