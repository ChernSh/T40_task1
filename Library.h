#pragma once
#include "SchoolBook.h"
#include "Journal.h"
#include <set>
class Library
{
	set<Publication*> lib;
public:
	Library() {
		lib.insert(new Book("123", "Harry Potter", "Joan Rouling", 2008, "Ranok"));
		lib.insert(new Journal("124", "Nature", "Picture", 2008, 1));
		lib.insert(new SchoolBook("125", "Math", "No Name", 2008, "Ranok", 10));
	};
	~Library() {
		cout << "Destructor library \n";
	}
	void showInfo()const {
		for (auto item : lib)
		{
			item->show();
		}
	}

};

