#include <iostream>
#include <cstdlib>
using namespace std;

void appendElements(int*& arr, int& size, int* elements, int blockSize) {

    int newSize = size + blockSize;
    int* newArr = new int[newSize];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < blockSize; i++) {
        newArr[size + i] = elements[i];
    }

    delete[] arr;

    arr = newArr;
    size = newSize;
}

int main() {
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};

    int blockSize = 4;
    int* elements = new int[blockSize] {6, 7, 8, 9};

    appendElements(arr, size, elements, blockSize);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] elements;

    system("pause>nul");
    return 0;
}
