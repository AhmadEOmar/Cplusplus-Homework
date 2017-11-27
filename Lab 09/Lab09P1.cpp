#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
		//Declare Variables
		char letter = ' ';
		
		
		//Request Input
		cout << "Enter a letter:" << endl;
		cin >> letter;
		cout << "Letter in uppercase:" << endl;
		letter = toupper (letter);
		cout << letter << endl;
		
		//Display Outcome
		if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
		{
			cout << "This letter is a vowel!" << endl;
			
			
			}	
		else {
			cout << "This is not a vowel" << endl;
		}
	
}

