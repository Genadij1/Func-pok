#include<iostream>
#include<cstdlib>
using namespace std;

void arra(int* arr, int SIZE);

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 1,2,3,4,5 };

	arra(arr, SIZE);

	system("pause>nul");
	return 0;
}

void arra(int *arr, int SIZE)
{
	int sum = 0;
	int mul = 1;

	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
		mul *= arr[i];
	}

	/*for (int i = 1; i <= SIZE; i++)
	{
		mul *= arr[i];
	}*/

	cout << sum << endl << mul;
}