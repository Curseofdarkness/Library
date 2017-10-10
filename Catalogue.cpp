#include "Catalogue.h"
#include <string>
#include <iostream>
#include <list>
#include "Book.h"


Catalogue::Catalogue(string n="unknown",string c="unknown",int t=0):Name(n),createdby(c),totalbooks(t)
{totalbooks=booklist.size();
}
void Catalogue::addbook(string a,string b,string c,int d,int f)
{
	booklist.push_front(new Book(a,b,c,d,f));
	totalbooks+=1;
}
string Catalogue::getname()
{
	return Name;
}
void Catalogue::removebook(int h)
{
	kiti=booklist.begin();
for(int b=1;b<h;b++,kiti++)
{
}
booklist.remove(*kiti);
}
void Catalogue::showdescription()
{
	cout<<"name of this catalogue is" <<Name<<endl;
	cout<<"this catalogue is created by "<<createdby<<endl;
	cout<<"this catalogue has "<<totalbooks<<" books in it"<<endl;
}
void Catalogue::showbookdetail(Book *b)
{
	b->show();
}

void Catalogue::showbooks()
{
	
	for(kiti=booklist.begin();kiti!=booklist.end();kiti++){
		(*kiti)->show();
	}
}
void Catalogue::editbook(int z)
{
	string a,m;
	int k;
	kiti=booklist.begin();
	for(int h=1;h<=z;h++,kiti++)
	{
		
	}
	(*kiti)->show();
	cout<<"what do you want to change"<<endl;
	cin>>a;
	if(a=="author")
	{
		cout<<"enter the new author"<<endl;
		cin>>m;
		(*kiti)->setauthor(m);
	}
	else if(a=="title")
	{
		cout<<"enter new title"<<endl;
		cin>>m;
		(*kiti)->settitle(m);
	}
	else if(a=="isbn")
	{
	cout<<"enter new isbn number"<<endl;
	cin>>k;
	(*kiti)->setisbn(k);
	}
	else if(a=="number")
	{
	cout<<"enter number of copies"<<endl;
	cin>>k;
	(*kiti)->setcopies(k);
	}

}

void Catalogue::issuebok(int w,Member *b)
{
	kiti=booklist.begin();
	for(int a=1;a<=w;a++,kiti++)
	{
	}
	if((*kiti)->isAvaible())
	{
		b->issueBook((*kiti));
		issue.push_front((*kiti));
		
	}
	else
	{
		cout<<"there is not enough copy"<<endl;
	}
	
}
void Catalogue::search(string a,Member *b)
{
	int i=0;
	list<Book*>::iterator litter;
	litter=booklist.begin();
	for(litter=booklist.begin();litter!=booklist.end();litter++)
	{
		i++;
		if(a==(*litter)->getname())
		{
			litter=booklist.end();
		}

	}
	litter=booklist.begin();
	for(int s=1;s<i;s++,litter++){
	if(i!=booklist.size())
	{
		cout<<"found in "<<getname()<<endl;
	b->Returnbook((*litter));
	}
	else
	{

		cout<<"book not found in "<<getname()<<endl;
		
	}
	}
}
