#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

void assignSeats(ifstream &in, char seats[][6]);
void display(char seats[][6]);
int main()
{
	const int NUM_ROWS = 13;
	const int NUM_COL = 6;
	char seats[NUM_ROWS][NUM_COL];
	for (int r = 0; r < NUM_ROWS;r++)
	for (int c = 0; c < NUM_COL; c++)
		seats[r][c] = '*';
	//This will locate the file and then open it in the programm
	ifstream inFile;
	inFile.open("reservation.dat", ios::in);
	if (!inFile)
	{
		cout << "Error reading file" << endl;
		return 1;
	}
	assignSeats(inFile, seats);
	display(seats);
	inFile.close();
	

	system("pause");
	return 0;
}

void assignSeats(ifstream &inFile, char seats[][6])
{
	string seat = "";
	int ROW_NUM;
	int COL_NUM;
	while (!inFile.eof())
	{
		inFile >> seat;

		if (seat.size() == 3)
		{
			// This gets the string size of the seat. Doing this to get the location of the reservation space. This is for spaces with two spots e.g. R1C
			ROW_NUM= seat[1] - '0' - 1;
			COL_NUM = seat[2] - 'A';
			seats[ROW_NUM][COL_NUM] = 'X';
		}
		else
		{
			//This gets the string size of seat, for seats that have more than 3 digits e.g. R12A. 
			seat.size() == 4;		
			int tensVAL = seat[1] - '0';
			int onesVAL = seat[2] - '0';
			ROW_NUM = (tensVAL * 10) + onesVAL - 1;
			COL_NUM = seat[3] - 'A';
			seats[ROW_NUM][COL_NUM] = 'X';
		}
		
			//Prints out the infomation
		cout << seat << " " << ROW_NUM << " " << COL_NUM << endl;

	}
}
void display(char seats[][6])
{
	ofstream outFile;
	outFile.open("Reservation_R.dat", ios::out);
	if (outFile.is_open())
	{

		outFile << setw(4) << "A" << setw(4) << "B"
			<< setw(4) << "C" << setw(4) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
		for (int r = 0; r < 13; r++)
		{

			for (int c = 0; c < 6; c++)
				outFile << setw(4) << seats[r][c];

			outFile << endl;
		}
		outFile.close();
	}
	else{ cout << "Cannot open file" << endl; }
}
