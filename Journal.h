#pragma once
#include "Publication.h"
class Journal : public Publication
{
protected:
	int number;
public:
	Journal() :Publication() {
		number = 0;
	}
	Journal(string ISBN, string name, string author, int year, int number) 
		:Publication(ISBN, name, author, year) {
		this->number = number;
	}
	int getManufacturer()const { return number; }
	void setManufacturer(int number) { this->number = number; }

	void show()const override {
		cout << "------------------JOURNAL----------------------\n";
		Publication::show();
		cout << "Number: " << number << endl;
	}
};

