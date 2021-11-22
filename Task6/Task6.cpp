// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// Define and initialize variables
	int P0; // Sound power
	int P1; // Increased sound power
	double finalResult;
	char answer = 'n';;

	do
	{
		// Read the values from user
		system("CLS"); // Clear screen
		cout << "POWER CALCULATIONS" << endl;
		cout << "==========" << endl << endl;
		cout << "Sound Power P0: ";
		cin >> P0;
		cout << "Sound Power P1: ";
		cin >> P1;
		cin.ignore(80, '\n'); // Skip any possible debris and line endings

		// Calculation
		finalResult =

		// Display result
		cout << "A change from " << P0 << " to " << P1 << " corresponds to " << << " db.\n" << "That is, " << << " level of ";
		cout << "One more time (Y/N)?";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;

}
