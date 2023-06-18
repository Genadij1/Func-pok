#include <iostream>
#include <cstdlib>
using namespace std;

int* removeNegativeNumbers(int* arr, int size, int& newSize) {

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }

    int* newArr = new int[count];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index] = arr[i];
            index++;
        }
    }

    newSize = count;

    return newArr;
}

int main() {
    int size = 8;
    int* arr = new int[size] {1, -2, 3, -4, 5, -6, 7, -8};

    int newSize = 0;
    int* newArr = removeNegativeNumbers(arr, size, newSize);

    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] newArr;

    system("pause>nul");
    return 0;
}
