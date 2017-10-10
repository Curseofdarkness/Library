#include "Member.h"



void Member::setadress(string c)
{
	adress=c;
}
void Member::setbirtdate(int d,int e,int f)
{
	birthday=d;
	birthmoonth=e;
	birthyear=f;
}
void Member::setlastname(string b)
{Lastname=b;}

void Member::setname(string a)
{Firstname=a;}
void Member::setcontac(int g){
	contactnumber=g;
}
void Member::setmail(string k)
{
	mailadress=k;
}
void Member::setmemdate(int q,int w,int e)
{
	memday=q;
	memmoonth=w;
	mmemyear=e;
}
Member::~Member()
{
}
string Member::getname()
{
	return Firstname;
}
void Member::issuedpush(Book* a){
	issued.push_front(a);
}
void Member::issueBook(Book* a){
	if(a->isAvaible())
	{
		issuing.push_front(a);
		a->update();
		issuedpush(a);
		cout<<"done"<<endl;
	}
	else
	{
		cout<<"book is not available"<<endl;
	}
}
void Member::show()
{
	cout<<"name :"<<Firstname<<endl;
	cout<<"lastname :"<<Lastname<<endl;
	cout<<"adress :"<<adress<<endl;
	cout<<"mail :"<<mailadress<<endl;
	cout<<"contact number :"<<contactnumber<<endl;
	cout<<"birtday :"<<birthday<<" "<<birthmoonth<<" "<<birthyear<<endl;
	cout<<"day member added"<<memday<<" "<<memmoonth<<" "<<mmemyear<<endl;

}
string Member::getlast()
{
	return Lastname;
}
void Member::Returnbook(Book *a){
	(*a).updaate();
	issuing.pop_front();
}
void Member::getlistofbooksissued()
{
	list<Book*>::iterator liter;
	
	for(liter=issued.begin();liter!=issued.end();liter++)
	{
		cout<<*liter<<endl;
	}
}
void Member::getissuing()
{
	list<Book*>::iterator kitter;
	if(issuing.size()>0)
	{
		for(kitter=issuing.begin();kitter!=issuing.end();kitter++)
	{
		cout<<*kitter<<endl;
	}
	}
	else
	{
		cout<<"this member has no book right now"<<endl;
	}

}


