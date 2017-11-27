#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	    // Declare variables
    	double height = 0.0;
		double weight = 0.0;
		double bmi = 0.0;
	
       // Request input
	    cout << "Enter your height in inches: ";
	    cin >> height;
	    cout << "Enter your weight in pounds: ";
	    cin >> weight;
  
      // Calculate and display BMI 	
	    bmi = (weight/(height * height)) * 703;	
	    cout << "BMI: " << bmi << endl;

      system("pause");
      return 0;
}
