#include <iostream>
#include <cstdlib>
using namespace std;

void removeElements(int*& arr, int& size, int startIndex, int blockSize) {

    if (startIndex < 0 || startIndex >= size || blockSize <= 0) {
        cout << "Некоректні вхідні дані!" << endl;
        return;
    }

    int endIndex = startIndex + blockSize - 1;

    if (endIndex >= size) {
        cout << "Некоректний розмір блоку!" << endl;
        return;
    }

    for (int i = endIndex + 1; i < size; i++) {
        arr[startIndex + i - endIndex - 1] = arr[i];
    }

    size -= blockSize;

    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;

    arr = newArr;
}

int main() {
    int size = 8;
    int* arr = new int[size] {1, 2, 3, 4, 5, 6, 7, 8};

    int startIndex = 2;
    int blockSize = 3;

    removeElements(arr, size, startIndex, blockSize);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    system("pause>nul");
    return 0;
}
