#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Book.h"
#include "Member.h"
using namespace std;
class Catalogue
{
private:
	string Name;
	string createdby;
	int totalbooks;
	list<Book*> booklist;
	list<Book*> issue;
	list<Book*>::iterator kiti;
public:
	Catalogue(string,string,int);
	~Catalogue()
	{
	}
	void showbooks();
	string getname();
	void issuebok(int,Member *);
	void addbook(string,string,string,int,int);
	void removebook(int);
	void showdescription();
	void showbookdetail(Book*);
	void editbook(int);
	void search(string,Member*);
};

