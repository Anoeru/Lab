#include "pch.h"
#include "Book.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main(int argc, char*argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Book book1;
	cout << "Title: "<<book1.getname();
	cout << "\nAuthor: "<<book1.getauthor();
	cout << "\nGenre: "<<book1.getgenre();
	cout << "\nPages: " << book1.getPage();
	cout << "\n==========================" << endl;

	string blacklist;
	cout << "\nenter title: ";
	cin >> blacklist;
	book1.setname(blacklist);
	cout << "\nenter author: ";
	cin >> blacklist;
	book1.setauthor(blacklist);
	cout << "\nenter genre: ";
	cin >> blacklist;
	book1.setGenre(blacklist);
	int whitelist;
	cout << "\nhow many pages: ";
	cin >> whitelist;
	book1.setPage(whitelist);
	cout << "\nTitle: "<<book1.getname();
	cout << "\nAuthor: "<<book1.getauthor();
	cout << "\nGenre: "<<book1.getgenre();
	cout << "\nPages: " << book1.getPage();
	cout << "\n==========================" << endl;


	system("pause");
	return 0;
}