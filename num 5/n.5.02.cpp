#include "pch.h"
#include <iostream>
using namespace std;

void SelectionSort(int* arr, int sizeArr) {
	for (int i = 0; i < sizeArr - 1; i++) {
		int minEl = arr[i];
		int minIn = i;
		for (int j = i; j < sizeArr; j++)
			if (arr[j] < minEl) {
				minEl = arr[j];
				minIn = j;
			}
		arr[minIn] = arr[i];
		arr[i] = minEl;
	}
}

void SelectionSort(double* arr, int sizeArr) {
	for (int i = 0; i < sizeArr - 1; i++) {
		double minEl = arr[i];
		int minIn = i;
		for (int j = i; j < sizeArr; j++)
			if (arr[j] < minEl) {
				minEl = arr[j];
				minIn = j;
			}
		arr[minIn] = arr[i];
		arr[i] = minEl;
	}
}

int main()
{
	int arr[5];
	cout << "enter your massive: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	SelectionSort(arr, 5);
	cout << "the result is: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}
	double arr1[6];
	cout << "\nenter your massive: ";
	for (int i = 0; i < 6; i++)
	{
		cin >> arr1[i];
	}
	cout << endl;
	SelectionSort(arr1, 6);
	cout << "the result is: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr1[i] << ' ';
	}
	system("pause");
	return 0;
}