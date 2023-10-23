#include <iostream>
using namespace std;
// ористувач вводить прибуток ф≥рми за р≥к (12 м≥с€ц≥в). ѕот≥м користувач вводить д≥апазон (наприклад, 3 ≥ 6 Ч пошук м≥ж 3-м ≥ 6-м м≥с€цем). Ќеобх≥дно визначити м≥с€ць, у €кому прибуток був максимальним, ≥ м≥с€ць, у €кому прибуток був м≥н≥мальним, з урахуванн€м обраного д≥апазону.
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

	int start, end;
	cout << "Enter the start month: ";
	cin >> start;
	cout << "Enter the end month: ";
	cin >> end;

	int max = income[start - 1];
	int min = income[start - 1];
	int maxMonth = start;
	int minMonth = start;

	for (int i = start; i <= end; i++) {
		if (income[i - 1] > max) {
			max = income[i - 1];
			maxMonth = i;
		}
		if (income[i - 1] < min) {
			min = income[i - 1];
			minMonth = i;
		}
	}

	cout << "Max income: " << max << " in " << maxMonth << " month" << endl;
	cout << "Min income: " << min << " in " << minMonth << " month" << endl;

	return 0;
} 