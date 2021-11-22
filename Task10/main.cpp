// Summary:  the program calculates the compound interest of an amount of money deposited in
// the bank for n years

// Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

// b * (1 + r / 100) * n
// n = years; r = percent; b = amount deposited in the bank;
// amount * (1 + PERCENT / 100) * years

// Define and initialize constants and variables
const double PERCENT = 3;
double years = 0;
double amount = 0;
double finalAmount = 0;

// Prototypes
void Calculation();
void UserInput();
void PrintingCalculatedValue();

int main()
{
	char answer = 'n';
	do
	{
		UserInput();
		Calculation();
		PrintingCalculatedValue();

		cout << "One more time? (Y/N): ";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}

void Calculation()
{
	// Calculation
	finalAmount = amount * pow((1.0 + PERCENT / 100.0), years);
}

void UserInput()
{
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
	// Display result
	cout << "The capital with " << PERCENT << " % interest rate and after "
		 << years << " years will be: " << setfill('_') << setw(12) << finalAmount << " SEK." << endl << endl;
}
