#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define and initialize variables
	double investedAmount = 0.0;
	double yearlyPercentageOne = 0.0;
	double yearlyPercentageTwo = 0.0;
	double yearlyPercentageThree = 0.0;
	double yearlyPercentageFour = 0.0;
	double resultYearOne = 0.0;
	double resultYearTwo = 0.0;
	double resultYearThree = 0.0;
	double resultYearFour = 0.0;
	double finalResult = 0.0;
	char answer = 'n';

	do
	{
		// Load data from the user
		system("CLS"); // Clear the screen
		cout << "PAY RAISE\n";
		cout << "==============\n\n";
		cout << "What was your invested amount? ";
		cin >> investedAmount;
		cout << "Yearly percentage for the first year : ";
		cin >> yearlyPercentageOne;
		cout << "Yearly  percentage for the second year : ";
		cin >> yearlyPercentageTwo;
		cout << "Yearly percentage for the third year : ";
		cin >> yearlyPercentageThree;
		cout << "Yearly percentage for the fourth year : ";
		cin >> yearlyPercentageFour;
		cin.ignore(80, '\n'); // Skip any possible debris and line endings

		// Calculation
		finalResult = investedAmount;

		resultYearOne = finalResult * (yearlyPercentageOne * 0.01);
		finalResult += resultYearOne;

		resultYearTwo = finalResult * (yearlyPercentageTwo * 0.01);
		finalResult += resultYearTwo;

		resultYearThree = finalResult * (yearlyPercentageThree * 0.01);
		finalResult += resultYearThree;

		resultYearFour = finalResult * (yearlyPercentageFour * 0.01);
		finalResult += resultYearFour;

		// Display results
		cout << "Your current investment is : " << finalResult << endl;
		cout << "==============\n";
		cout << "One more time (Y/N)?";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}