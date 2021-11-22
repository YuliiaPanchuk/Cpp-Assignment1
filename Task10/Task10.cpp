// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// b * (1 + r / 100) * n
// n = years; r = percent; b = amount deposited in the bank;
// amount * (1 + PERCENT / 100) * years

// Prototypes
double Calculation();
void UserInput();
void PrintingCalculatedValue();

int main()
{
	char answer = 'n';
	do
	{
		Calculation();
		cout << "One more time? (Y/N): ";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}

 double Calculation()
{
	// Define and initialize constants and variables
	const int PERCENT = 3;
	int years;
	int amount;
	double finalAmount;


	// Calculation
	finalAmount = amount * (1 + PERCENT / 100) * years;

}

void UserInput()
{
	// Define and initialize variables
	int years;
	int amount;

	// Load data from the user
	system("CLS"); // Clear the screen
	cout << "COMPOUND INTEREST\n";
	cout << "==============\n\n";
	cout << "Load initial amount: ";
	cin >> amount;
	cout << "Load number of years: ";
	cin >> years;
}


void PrintingCalculatedValue()
{
	// Define and initialize constants and variables
	const int PERCENT = 3;
	int years = 0;
	double finalAmount = 0;

	// Display result
	cout << "The capital with " << PERCENT << " % interest rate and after " << years << " years will be: " << finalAmount << " SEK.";
}