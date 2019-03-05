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
	Book();//������ ���������
	Book(const int, const std::string&, const std::string&, const std::string&);
	void setPage(const int); //���������� �������

	int getPage(); //���������� ������� (���� � ����������)

	void setname(const std::string&);//�������� �����

	std::string &getname();//�������� ����� (���� � ����������)

	void setauthor(const std::string&);//��� ������ 

	std::string &getauthor();//��� ������ (���� � ����������)

	void setGenre(const std::string &);//����

	std::string &getgenre();//���� (���� � ����������)

};
#endif BOOK_H_