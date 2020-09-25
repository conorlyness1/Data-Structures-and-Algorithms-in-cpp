#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// A function to implement bubble sort.
void bubbleSort(int a[], int N)
{
	bool sorted;
	do {
		sorted = true;
		for (int i = 0; i < N - 1; i++)
			if (a[i] > a[i + 1]) {
				// out of order - swap a[i] and a[i+1]
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				sorted = false;
			}
	} while (sorted == false);
				
}


int main()
{
	int size = 10;
	int* arr = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		
		arr[i] = rand() % 25;
	}

	//array before using bubbleSort
	for (int i = 0; i < size; i++)
	{
		cout << i << "[" << arr[i] << "]" << endl;
	}

	//array after bubbleSort
	cout << endl;
	cout << "array after using bubbleSort" << endl;
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << i << "[" << arr[i] << "]" << endl;
	}

	return 0;
}