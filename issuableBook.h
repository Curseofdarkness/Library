#pragma once
#include <string>
#include <iostream>
#include "Book.h"
#include <list>
class issuableBook: public Book

{
private:
	int issuanceID();
	list<Book*> isuable;
	list<Book*>::iterator giter;

public:
	void check();
	void addornot(Book*);
	void addtolis(Book*);
	issuableBook();
	
};

