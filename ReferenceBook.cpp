#include "ReferenceBook.h"


ReferenceBook::ReferenceBook(void)
{
}
void ReferenceBook::addtolis(Book *a)
{
	reference.push_front(a);
}
void ReferenceBook::check()
{
	list<Book*>::iterator ziter;
	ziter=reference.begin();
	while(ziter!=reference.end())
	{
		if((*ziter)->isAvaible())
	{
		cout<<"add this book to issuablelist"<<endl;
		reference.erase(ziter);
	}
	else
	{
	}
	}
}

