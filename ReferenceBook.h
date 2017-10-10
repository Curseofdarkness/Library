#pragma once
#include "Book.h"
#include <list>
class ReferenceBook: public Book
{
private:
	int referenceid;
	list<Book*> reference;
public:
	void check();
	void addtolis(Book*);
	ReferenceBook();


};

