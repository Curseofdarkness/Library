#include "issuableBook.h"


issuableBook::issuableBook()
{
}
void issuableBook::addtolis(Book *a)
{
	isuable.push_front(a);
}
void issuableBook::addornot(Book *b)
{
	if(b->isAvaible())
	{
		addtolis(b);
	}
	else
	{
		cout<<"there is not enough copies"<<endl;
	}
}
void issuableBook::check()
{
	
	giter=isuable.begin();
	for(giter=isuable.begin();giter!=isuable.end();giter++)
	{
		if((*giter)->isAvaible())
		{}
		else
		{
			isuable.erase(giter);
		}


	}
}
