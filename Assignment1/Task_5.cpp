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
	char answer;

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
		result = (kilometers / averageSpeed) * 60.0; // Calculating minutes
		remainingMinutes = fmod(result, 60); 
		remainingHours = (result / 60);
		cout << "It remains " << remainingHours << " hours and " << remainingMinutes << " min.";
	} while ((answer == 'Y' || answer == 'y'));

	return 0;
}