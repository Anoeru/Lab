#include "pch.h"
#include <iostream>
using namespace std;
void addrandom(int **m, int h, int v)
{
	for (int i = 0; i < h; i++)
		for (int j = 0; j < v; j++)
			m[i][j] = (rand() % 40) + 10;
}
void show(int **m, int h, int v)
{
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < v; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
}
int main()
{
	
	int h, v;
	cout << "enter a number of slots\nhorintally and vertically: ";
	cin >> v >> h;
	int **m = new int *[h];
	for (int i = 0; i < h; i++)
	{
		m[i] = new int[v];
	}
	addrandom(m,h,v);
	show(m, h, v);

	system("pause");
	return 0;
}

