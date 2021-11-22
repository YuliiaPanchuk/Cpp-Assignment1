// Preprocessor directives
#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;

//			T = temperature		v = vindstyrka
// Teff = 13.126667 + 0.6215 × T - 13.924748 × pow(v, 0.16) + 0.4875195 × T × pow(v, 0.16)

int main()
{
	// Define and initialize variables
	double temperature;
	double MS;
	double result;
	char answer = 'n';

	do
	{
		// Read the values from user
		system("CLS"); // Clear screen
		cout << "Wind chill, effective temperature" << endl;
		cout << "==========" << endl << endl;
		cout << "Temperatur (Celsius ) : ";
		cin >> temperature;
		cout << "What is m/s : ";
		cin >> MS;

		// Calculation
		result = round(13.126667 + 0.6215 * temperature - 13.924748 * pow(MS, 0.16) + 0.4875195 * temperature * pow(MS, 0.16));

		// Display result
		cout << "The result is : " << result << endl << endl;
		cout << "One more time (Y/N)?";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');
	return 0;
}
