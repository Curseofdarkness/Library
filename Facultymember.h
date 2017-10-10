#pragma once
#include <string>
#include <iostream>
#include "Member.h"
using namespace std;
class Facultymember: public Member
{
public:
	void Checkoutbook();
	int getid();
	Facultymember(string,string,string,string,int,int,int,int,int,int,int,string,int);
	
private:
	string Collegename;
	int EmplyeeID;
};

