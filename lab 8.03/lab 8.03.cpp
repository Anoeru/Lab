#include "pch.h"
#include <iostream>
#include <queue>
using namespace std;


int main()
{
	priority_queue<int> myQueue;
	int n;

	for (int i=0; i < 5; i++)
	{
		cout << "enter car number ";
		cin >> n;
		myQueue.push(n);
	}

	cout << "number of elements: " << myQueue.size() << endl;
	cout << "here they are: \n";
	while (!myQueue.empty()) {
		cout << myQueue.top() << "\n";
		myQueue.pop();
	}
	return 0;
}