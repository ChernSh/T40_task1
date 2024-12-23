#pragma once
#include "Book.h"
class SchoolBook : public Book
{
protected:
	int yearGroup;
public:
	SchoolBook() : Book()
	{
		yearGroup = 0;
	}
	SchoolBook(string ISBN, string name, string author, int year, string manufactirer, int yearGroup) :
		Book(ISBN, name, author, year, manufacturer)
	{
		this->yearGroup = yearGroup;
	}
	int getYearGroup()const { return yearGroup; }
	void setYearGroup(int yearGroup) { this->yearGroup = yearGroup; }

	void show() const override {
		cout << "------------------SCHOOL----------------------\n";
		Book::show();
		cout << "Year group: " << yearGroup << "\n";
	}
};
