#include <iostream>
using namespace std;


int main() {
    const int arraySize = 5; 
    int array[arraySize] = { 1, 2, 3, 4, 5 }; 

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}