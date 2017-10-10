#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Member.h"
#include "Book.h"
using namespace std;
class Member
{
	
	
public:
	
	Member(string a="unknown",string b="unknown",string c="unknown",string d="unknown",int f=0,int g=0,int h=0,int j=0,int z=0,int x=0,int v=0):Firstname(a),Lastname(b),adress(c),mailadress(d),contactnumber(f),memday(g),memmoonth(h),mmemyear(j),birthday(z),birthmoonth(x),birthyear(v){}
	void issuedpush(Book*);
	void setname(string);
	void setlastname(string);
	void issueBook(Book*);
	void Returnbook(Book*);
	void renewMembership();
	void removeMembership();
	void getlistofbooksissued();
	void setmemdate(int,int,int);
	void setbirtdate(int,int,int);
	void setadress(string);
	void setmail(string);
	void setcontac(int);
	void getissuing();
	string getname();
	string getlast();
	void show();

	 ~Member();
private:
	list<Book*> issuing;
	list<Book*> issued;
	string Firstname;
	string Middleinitial;
	string Lastname;
	int birthday;
	int birthmoonth;
	int birthyear;
	int memday;
	int memmoonth;
	int mmemyear;
	string adress;
	int contactnumber;
	string mailadress;
};
