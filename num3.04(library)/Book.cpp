#include "pch.h"
#include "Book.h"

Book::Book()
{
	this->num_page = 0;
	this->book_name = "-";
	this->man_name = "-";
	this->genre = "-";
}
Book::Book(const int num_pages, const std::string &title, const std::string &author, const std::string &genre)
{
	this->num_page = num_pages;
	this->book_name = title;
	this->man_name = author;
	this->genre = genre;
}
void Book::setPage(const int pagenum)
{
	this->num_page = pagenum;
}
int Book::getPage()
{
	return num_page;
}
void Book::setname(const std::string &bookname)
{
	this->book_name = bookname;
}
std::string &Book::getname() {
	if (!book_name.size()) {
		std::cout << "The book has no title." << std::endl;
	}
	return book_name;
}
void Book::setauthor(const std::string &manname)
{
	this->man_name = manname;
}
std::string  &Book::getauthor()
{
	if (!man_name.size()) {
		std::cout << "The book has no author." << std::endl;
	}
	return man_name;
}
void Book::setGenre(const std::string &genre1)
{
	this->genre = genre1;
}
std::string &Book::getgenre()
{
	if (!genre.size()) {
		std::cout << "The book has no genre." << std::endl;
	}
	return genre;
}