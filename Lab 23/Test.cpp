#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
	// Declare array and initialize elements

    double salary[6];
	
	salary[0] = 0.0;
	salary[1] = 0.0;
	salary[2] = 0.0;
	salary[3] = 0.0;
	salary[4] = 0.0;
	salary[5] = 0.0;
	
	// Request array input
  cout << "You will be asked to enter the salary for 6 workers."<< endl;
	cout << "Enter salary for a worker: ";
	cin >> salary[0];
	cout << "Enter salary for a worker: ";
	cin >> salary[1];
	cout << "Enter salary for a worker: ";
	cin >> salary[2];
	cout << "Enter salary for a worker: ";
	cin >> salary[3];
	cout << "Enter salary for a worker: ";
	cin >> salary[4];
	cout << "Enter salary for a worker: ";
	cin >> salary[5];

	// Display array values
	cout << endl;
	cout << "The salaries you entered are: "<< endl;
	
	cout << salary[0] << endl;
	cout << salary[1] << endl;
	cout << salary[2] << endl;
	cout << salary[3] << endl;
	cout << salary[4] << endl;
	cout << salary[5] << endl;
		
	system("pause"); 
	return 0;
}
