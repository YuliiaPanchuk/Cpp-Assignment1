// Summary: With the help of the average speed and remaining distance to run, the program calculates the remaining travel time

// Preprocessor directives
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	// Define and initialize variables
	int remainigDistance = 0; // In miles
	int averageSpeed = 0; // Speed in km/h
	int remainingMinutes;
	int remainingHours;
	double remainingTime;
	int kilometers;
	double result;
	char answer = 'Y';

	do
	{
		// Load information from the user
		system("CLS"); // Clear the screen
		cout << "Travel time\n";
		cout << "==============\n\n";
		cout << "What is your remaining distance according to Swedish miles? ";
		cin >> remainigDistance;
		cout << "Input avarage speed : ";
		cin >> averageSpeed;
		cin.ignore(80, '\n'); // Skip any possible debris and line endings

		// Calculate remaining travel time
		kilometers = int(remainigDistance * 10.0); // Converting miles to kilometers
		result = (double(kilometers) / double(averageSpeed)) * 60.0; // Calculating minutes
		remainingMinutes = int(ceil(fmod(result, 60.0))); 
		remainingHours = int(result / 60.0);

		// Display results
		cout << "It remains " << remainingHours << " hours and " << remainingMinutes << " min." << endl;
		cout << "\n\nNew calculation (Y/N)?";
		cin >> answer;
	} while ((answer == 'Y' || answer == 'y'));

	return 0;
}