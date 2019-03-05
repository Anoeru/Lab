#include <iostream>
#include <string>

#ifndef BOOK_H_
#define BOOK_H_
class Book
{
private:
	int num_page;
	std::string book_name;
	std::string man_name;
	std::string genre;
public:
	Book();//пустой экземпл€р
	Book(const int, const std::string&, const std::string&, const std::string&);
	void setPage(const int); //количество страниц

	int getPage(); //количество страниц (ввод с клавиатуры)

	void setname(const std::string&);//название книги

	std::string &getname();//название книги (ввод с клавиатуры)

	void setauthor(const std::string&);//им€ автора 

	std::string &getauthor();//им€ автора (ввод с клавиатуры)

	void setGenre(const std::string &);//жанр

	std::string &getgenre();//жанр (ввод с клавиатуры)

};
#endif BOOK_H_