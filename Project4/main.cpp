#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int arr[40];
	for (int i = 0; i < 40; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	int min = arr[0];
	int max = arr[0];
	cout << endl;
	for (int i = 0; i < 40; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	return 0;
}