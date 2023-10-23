#include <iostream>
using namespace std;

int main() {
	const int months = 12;
	int income[months];
	cout << "Enter your income for the 1 month: ";
	cin >> income[0];
	cout << "Enter your income for the 2 month: ";
	cin >> income[1];
	cout << "Enter your income for the 3 month: ";
	cin >> income[2];
	cout << "Enter your income for the 4 month: ";
	cin >> income[3];
	cout << "Enter your income for the 5 month: ";
	cin >> income[4];
	cout << "Enter your income for the 6 month: ";
	cin >> income[5];
	cout << "Enter your income for the 7 month: ";
	cin >> income[6];
	cout << "Enter your income for the 8 month: ";
	cin >> income[7];
	cout << "Enter your income for the 9 month: ";
	cin >> income[8];
	cout << "Enter your income for the 10 month: ";
	cin >> income[9];
	cout << "Enter your income for the 11 month: ";
	cin >> income[10];
	cout << "Enter your income for the 12 month: ";
	cin >> income[11];
	
	int maxincome = income[0];
	int minincome = income[0];
	for (int i = 0; i < months; i++) {
		if (income[i] > maxincome) {
			maxincome = income[i];
		}
		if (income[i] < minincome) {
			minincome = income[i];
		}
	}
	cout << "Your max income is: " << maxincome << endl;
	cout << "Your min income is: " << minincome << endl;


}