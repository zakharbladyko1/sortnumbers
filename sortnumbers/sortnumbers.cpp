#include <iostream>
using namespace std;

const int SIZE = 5;
void bsort(int*);

int main()
{
	// Array
	int arr[SIZE] = {};

	// Entering numbers into an array
	cout << "Enter array : ";
	for (int k = 0; k < SIZE; k++)
		cin >> arr[k];

	// Passing an array to a function
	bsort(arr);

	// Outputting a sorted array
	cout << "\nArray after sort : ";
	for (int i = 0; i < SIZE; i++)
		cout << *(arr + i) << ' ';
	cout << endl;

	return 0;
}

// Sorting Algorithm
void bsort(int* numb1)
{
	for (int f = 0; f < SIZE; f++)
		for (int i = 0; i < SIZE; i++)
		{
			if (*(numb1 + f) < *(numb1 + i))
			{
				int temp = *(numb1 + f);
				*(numb1 + f) = *(numb1 + i);
				*(numb1 + i) = temp;
			}
		}
}