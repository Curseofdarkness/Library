#pragma once
#include <string>
#include <iostream>
#include "Book.h"
#include "Member.h"
#include "Catalogue.h"
using namespace std;
class Librarian
{
private:
	string Firstname;
	string Lastname;
	string LoginID;
	int password;
	int datemon;
	int dateday;
	int dateyear;
	string mail;
	string homeadres;
	int contact;
public:
	Librarian(string a="unknown",string b="unknown",string c="unknownuser",string f="unknown",string g="unknown",int d=1234,int h=53845):Firstname(a),Lastname(b),LoginID(c),password(d),mail(f),homeadres(g),contact(h){}
	string getID();
	int getpass();
	void setID(string);
	void setpass(int);
	void setmail(string);
	void sethome(string);
	void setcont(int);
	string getname();
	void setdate(int,int,int);
    void viewAlerts();
	void show();
	

	
};

