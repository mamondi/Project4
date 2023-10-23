#include <iostream>
using namespace std;

int main()
{
	int income = 0;

	cout << "Enter the income per month: ";
	cin >> income;

	while (income < 0)
	{
		cout << "Invalid income. Please enter a positive number: ";
		cin >> income;
	}

	while (income > 0)
	{
		cout << "Income for 6 month is: " << income * 6 << endl;
		break;
	}
}