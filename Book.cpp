
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;



bool Book::isAvaible(){
	if(numberofcopies>0){
		return true;}
	else{
		return false;}

}
void Book::lastused(int b)
{

}
void Book::showhistory()
{
	list<string>::iterator siter;
	list<int>::iterator inter;
	
	
	for(siter=lastuser.begin(),inter=lastuseddate.begin();siter!=lastuser.end(),inter!=lastuseddate.end();siter++,inter++){
		cout<<*siter<<"     "<<*inter<<endl;
	}
}
void Book::update(){
	if(isAvaible())
	{
	numissued+=1;
	numberofcopies+=-1;
	}
	else
	{
		cout<<"cant issue"<<endl;
	}
}
void Book::setauthor(string a){author=a;}
void Book::setcopies(int b){numberofcopies=b;}
void Book::setdate(int c,int d,int e){dayadd=c; monthadd=d; yearadd=e;}
void Book::setisbn(int f){ISBN=f;}
void Book::settitle(string g){title=g;}
void Book::show()
{
	cout<<"title: "<<title<<endl;
	cout<<"author: "<<author<<endl;
	cout<<"ISBN: "<<ISBN<<endl;
	cout<<"number of copies: "<<numberofcopies<<endl;
	cout<<"\n"<<endl;
}
string Book::getname()
{
	return title;
}
void Book::updaate(){
	numberofcopies+=1;
}
bool Book::operator==(const Book a)
{
	if(a.author==author && a.title==title)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int Book::getnumis()
{
	return numissued;
}
