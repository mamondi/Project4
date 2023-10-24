#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int size = 20;
	int array[size];
	int negsum = 0;
	int min = 0;
	int max = 0;
	bool minmax = false;
	int minin = 0;
	int maxin = 0;
	int minmaxcont = 1;


	srand(time(NULL));	

	for (int i = 0; i < size; i++) {
		array[i] = -35 + rand() % 100;
		cout << array[i] << " ";
		if (array[i] < 0) {
			negsum += array[i];
		}
		if (minmax == false) {
			min = array[i];
			max = array[i];
			minmax = true;
		}
		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (array[i] == min) {
			minin = i;
		}
		if (array[i] == max) {
			maxin = i;
		}
	}

	if (minin < maxin) {
		for (int i = minin; i <= maxin; i++) {
			minmaxcont *= array[i];
		}
	}

	
	else {
		int start = minin < maxin ? minin : maxin;
		int end = minin < maxin ? maxin : minin;

		for (int i = start + 1; i < end; i++) {
			minmaxcont *= array[i];
		}
	}


	int sumBetweenNeg = 0;
	int firstNegIn = -1;
	int lastNegIn = -1;

	for (int i = 0; i < size; i++) {
		if (array[i] < 0) {
			if (firstNegIn == -1) {
				firstNegIn = i;
			}
			else {
				lastNegIn = i;
			}
		}
	}

	if (firstNegIn != -1 && lastNegIn != -1) {
		for (int i = firstNegIn + 1; i < lastNegIn; i++) {
			sumBetweenNeg += array[i];
		}
	}

	cout << " " << endl;
	cout << "Sum of negative elements: " << negsum << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Content of elements between min and max: " << minmaxcont << endl;
	cout << "Sum of elements between first and last negative elements: " << sumBetweenNeg << endl;

	return 0;
}