#include "pch.h"
#include <iostream>

using namespace std;

double* first(int n) {
	double* m = new double[n];
	return m;
}

void second(double* m, int n) {
	cout << "enter your massive: ";
	for (int i = 0; i < n; i++)
		cin >> m[i];
}

void third(double* m, int n) {
	cout << "the result is: ";
	for (int i = 0; i < n; i++)
		cout << m[i] << ' ';
	cout << endl;
}

void fourth(double*m) {
	delete[] m;
}

void InitRandom(int** a, int k, int l) {
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			a[i][j] = (rand() % 40) + 10;
}

void PrintIntArray(int** a, int k, int l) {
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < l; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
}

int main(int argc, const char * argv[]) {
	int n = 0;
	while (n != 34) {
		cout << "To exit click 34" << endl;
		cout << "Enter the number of slots ";
		cin >> n;
		if (n == 34)
			return 0;
		double* m = first(n);
		second(m, n);
		third(m, n);
		fourth(m);
	}
	
	system("pause");
	return 0;
}