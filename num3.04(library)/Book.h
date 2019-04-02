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
	Book();//ïóñòîé ýêçåìïëÿð
	Book(const int, const std::string&, const std::string&, const std::string&);
	void setPage(const int); //êîëè÷åñòâî ñòðàíèö

	int getPage(); //êîëè÷åñòâî ñòðàíèö (ââîä ñ êëàâèàòóðû)

	void setname(const std::string&);//íàçâàíèå êíèãè

	std::string &getname();//íàçâàíèå êíèãè (ââîä ñ êëàâèàòóðû)

	void setauthor(const std::string&);//èìÿ àâòîðà 

	std::string &getauthor();//èìÿ àâòîðà (ââîä ñ êëàâèàòóðû)

	void setGenre(const std::string &);//æàíð

	std::string &getgenre();//æàíð (ââîä ñ êëàâèàòóðû)

};
#endif BOOK_H_
