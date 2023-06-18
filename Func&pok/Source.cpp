#include <iostream>
#include <cstdlib>
using namespace std;

int* findSubset(int* A, int sizeA, int* B, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; i++) {
        int j;
        for (j = 0; j < sizeB; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        if (j == sizeB) {
            return &A[i];
        }
    }
    return nullptr;
}

int main() {
    const int sizeA = 7;
    int A[sizeA] = { 1, 2, 3, 4, 5, 6, 7 };

    const int sizeB = 4;
    int B[sizeB] = { 3, 4, 5, 6 };

    int* result = findSubset(A, sizeA, B, sizeB);

    if (result != nullptr) {
        cout << "Array B is a subset of array A starting at element " << *result << endl;
    }
    else {
        cout << "Array B is not a subset of array A" << endl;
    }

    system("pause>nul");
    return 0;
}
