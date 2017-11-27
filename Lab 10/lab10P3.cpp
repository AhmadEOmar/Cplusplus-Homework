#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    	//Declare variables
    	double guesses = 0.0;
		
		
		//Request Input
    	cout << "How many guess left? ";
    	cin >> guesses;
    	
		
		//Display Output
		if (guesses == 6)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}
		else if (guesses == 5)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}		
		else if (guesses == 4)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|   |" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}		
		else if (guesses == 3)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|  <|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}
		else if (guesses == 2)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|  <|>" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}
		else if (guesses == 1)
		{
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|  <|>" << endl;
			cout << "|  (" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		}		
		else
		{
			guesses == 0;
			cout << "|----" << endl;
			cout << "|   |" << endl;
			cout << "|   O" << endl;
			cout << "|  <|>" << endl;
			cout << "|  ( )" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "_ _ _ _ _ _" << endl;
		
		}
	
    	system("pause");
    	return 0;
}

