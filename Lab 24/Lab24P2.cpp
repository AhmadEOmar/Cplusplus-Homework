// Created by Ahmad Omar on 4/21/15
// This program reads and displays Average score of 5 scores without the highest and lowest

#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
	double score[5];
	double scoreLarg = 0.0;
	double scoreSmall = 0.0;
	double scoreAvg = 0.0;
	double scoreSum = 0.0;
	
	
	
	for (int i=0;i < 5; i= i+1)
	{
		score[i]=0.0;
	}
	
	cout << "You will be asked to enter 5 scores." << endl;
	
	for (int i=0;i < 5; i= i+1)
	{
		cout << "Please enter a score: ";
		cin >> score[i];
		scoreSum = scoreSum+score[i];
		
		if (score[i] >scoreLarg)
		{
			scoreLarg=score[i];
		}
		scoreSmall=score[0];
		if (score[i]<scoreSmall)
		{
			scoreSmall=score[i];
		}
	}
	cout << "Lowest score: " << scoreSmall << endl;
	cout << "Highest score: " << scoreLarg << endl;
	scoreAvg = (scoreSum-scoreSmall-scoreLarg)/3;
	cout << "Average score with the highest and lowest scores removed: " << scoreAvg << endl << endl;
	
	system("Pause");
	return 0;
	


}



