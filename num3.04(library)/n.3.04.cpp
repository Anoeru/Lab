#include "pch.h"
#include "Book.h"
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
	Book bok;
	Library boom;
	boom.setNumBooks(3);
	for (int i = 0; i < 3; i++) {
		string s;
		int r;
		cout << "Enter info about book number " << i + 1 << endl;
		cout << "Author: ";
		cin >> s;
		bok.setauthor(s);
		cout << "\nTitle: ";
		cin >> s;
		bok.setname(s);
		cout << "\nGenre: ";
		cin >> s;
		bok.setGenre(s);
		cout << "\nNumber of Pages: ";
		cin >> r;
		bok.setPage(r);
		boom.addBook(bok);
	}
	for (int i = 0; i < 3; i++) {
		cout << "info about your book number "<<i+1<<": ";
		cout << boom.getAuthor(i) << endl;
		cout << boom.getTitle(i) << endl;
		cout << boom.getGenre(i) << endl;
		cout << boom.getPagenum(i) << endl;
	}
	system("pause");
	return 0;
}
	