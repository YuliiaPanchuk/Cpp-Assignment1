// Preprocessor directives
#include <iostream> //cin cout endl
#include <iomanip> //setw fixed setprecision
using namespace std;

//Prototypes
void summ();

int main()
{
	char answer;
	do
	{
		summ();
		cout << "One more time (Y/N) ?";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}
void summ()
{
	// Define and initialize variables
	int input, nr1, nr2, nr3;
	int sum = 0;

	// Read the values from user
	system("CLS"); // Clear screen
	cout << "Sum of three-digit number" << endl;
	cout << "==========" << endl << endl;
	cout << "Write your three-digit number : ";
	cin >> input;

	// Calculate sum, average and product
	nr1 = (input % 1000) / 100;
	nr2 = (input % 100) / 10;
	nr3 = input % 10;

	sum = nr1 + nr2 + nr3;

	// Display results
	cout << fixed << showpoint; // Decimal form, display trailing zeroes
	cout << "Sum is : " << sum << endl;
}
