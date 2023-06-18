#include<iostream>
#include<cstdlib>
using namespace std;

void arra(int* arr, int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE]{ -1,0,5,6,-7,4,-12,45,7,8 };

	arra(arr, SIZE);

	system("pause>nul");
	return 0;
}

void arra(int* arr, int SIZE)
{
	int positive = 0;
	int negative = 0;
	int zero = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0) 
		{
			positive += 1;
		}
		if (arr[i] < 0)
		{
			negative += 1;
		}
		if (arr[i] == 0)
		{
			zero += 1;
		}
	}

	cout << "positive = " << positive << "\n" << "negative = " << negative << "\n" << "zero = " << zero << endl;

}