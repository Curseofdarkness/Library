#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;
class Book{

private:
	string title;
	string author;
	int ISBN;
	int dayadd;
	int monthadd;
	int yearadd;
	int numberofcopies;
	string sub;
	int numissued;
	list<string> lastuser;
	list<int> lastuseddate;
public:
	bool operator==(const Book);
	
	
	Book(string t="unknown",string a="unknown",string s="unknown",int i=0,int num=1):title(t),author(a),sub(s),ISBN(i),numberofcopies(num){
	}
	void showhistory();
	void lastused(int);
	void settitle(string);
	void setauthor(string);
	void setisbn(int);
    void setdate(int,int,int);
	void setcopies(int);
	void show();
	string getname();
	bool isAvaible();
	void update();
	void updaate();
	void removeBook();
	int getnumis();



};

