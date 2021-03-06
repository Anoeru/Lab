#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void invertsort(int *arr, unsigned arrsize)
{
	unsigned i;
	int r;
	for (i = 0; i < arrsize/2; i++)
	{
		r = arr[i];
		arr[i] = arr[arrsize - i];
		arr[arrsize - i] = r;
	}
}

void maxsort(int *arr, unsigned arrsize)
{
	unsigned i;
	unsigned j;
	int r;
	for (i = 0; i < arrsize - 1; i++) {
		for (j = 0; j < arrsize - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				r = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = r;
			}
		}
	}
}

void minsort(int *arr, unsigned arrsize)
{
	unsigned i;
	unsigned j;
	int r;
	for (i = 0; i < arrsize - 1; i++) {
		for (j = 0; j < arrsize - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				r = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = r;
			}
		}
	}
}
void(*func(int *arr, unsigned arrsize))(int *arr, unsigned arrsize)
{
	int sum = 0;
	unsigned i;
	for (i = 0; i < arrsize; i++)
	{
		sum += arr[i];
	}
	if (sum == arr[0])
	{
		return invertsort;
	}
	else if (sum > arr[0])
		return minsort;
	else return maxsort;
}
int main() 
{
	srand(time(0));
	int s = 10;
	int *arr = new int[s];
	cout << "old array : ";
	for (int i=0; i < 10; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}

	func(arr,10)(arr, 10);

	cout << "\nnew array : ";
	for (int i=0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}