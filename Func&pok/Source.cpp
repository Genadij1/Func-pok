#include <iostream>
#include <cstdlib>
using namespace std; 

void insertElements(int*& arr, int& size, int* elements, int blockSize, int index) {

    if (index < 0 || index > size) {
        cout << "Некоректний індекс!" << endl;
        return;
    }

    int newSize = size + blockSize;
    int* newArr = new int[newSize];

    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < blockSize; i++) {
        newArr[index + i] = elements[i];
    }

    for (int i = index; i < size; i++) {
        newArr[blockSize + i] = arr[i];
    }

    delete[] arr;

    arr = newArr;
    size = newSize;
}

int main() {
    int size = 5;
    int* arr = new int[size] {1, 2, 6, 7, 8};

    int blockSize = 3;
    int* elements = new int[blockSize] {3, 4, 5};

    int index = 2;

    insertElements(arr, size, elements, blockSize, index);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] elements;

    system("pause>nul");
    return 0;
}
