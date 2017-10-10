#pragma once
#include <string>
#include <iostream>
#include "Member.h"
using namespace std;

class Student:public Member
{
public:
	void Checkoutbook();
	int getid();
	Student(string,string,string,string,int,int,int,int,int,int,int,string,int);
	
private:
	string Schoolname;
	int Schoolnumber;
};

