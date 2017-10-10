#include "Librarian.h"


void Librarian::setmail(string b)
{
	mail=b;
}
string Librarian::getID()
{
	return LoginID;
}
int Librarian::getpass()
{
	return password;
}
void Librarian::setdate(int a,int b,int c)
{
	dateday=a;
	datemon=b;
	dateyear=c;
}
string Librarian::getname()
{
	return Firstname;
}
void Librarian::show()
{
	cout<<"user :"<<LoginID<<endl;
	cout<<"name :"<<Firstname<<endl;
	cout<<"lastname:"<<Lastname<<endl;
	cout<<"mail adress:"<<mail<<endl;
	cout<<"contact number:"<<contact<<endl;
}
void Librarian::sethome(string a)
{
	homeadres=a;
}
void Librarian::setcont(int a)
{
	contact=a;

}
void Librarian::setID(string a)
{
	LoginID=a;
}
void Librarian::setpass(int b)
{
	password=b;
}
