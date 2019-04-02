#include "pch.h"
#include "Book.h"
#include "Library.h"

Library::Library()
{
	this->numBooks = 0;
	books.clear();
}
Library::Library(const int num)
{
	this->numBooks = num;
	books.resize(num);
}
void Library::setNumBooks(const int num)
{
	this->numBooks = num;
}
void Library::addBook(Book &b)
{
	books.push_back(b);
}
int Library::getNumBooks()
{
	return numBooks;
}
std::string Library::getAuthor(const int a)
{
	return books[a].getauthor();
}
std::string Library::getTitle(const int a)
{
	return books[a].getname();
}
std::string Library::getGenre(const int a)
{
	return books[a].getgenre();
}
int Library::getPagenum(const int a)
{
	return books[a].getPage();
}