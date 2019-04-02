#pragma once
#include "Book.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef LIBRARY_H_
#define LIBRARY_H_
class Library
{
private:
	int numBooks;
	std::vector<Book> books;
public:
	Library();
	Library(const int);
	void setNumBooks(const int);
	void addBook(Book&);
	int getNumBooks();
	std::string getAuthor(const int);
	std::string getTitle(const int);
	std::string getGenre(const int);
	int getPagenum(const int);
};
#endif BOOK_H_