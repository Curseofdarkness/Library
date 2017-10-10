#include "Book.h"
#include "Catalogue.h"
#include "Facultymember.h"
#include "issuableBook.h"
#include "Librarian.h"
#include "Member.h"
#include "ReferenceBook.h"
#include "Student.h"
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;
int main()
{
	int secim,secim1,secim2,secim3,secim4,bir;
	string cusfirst,cuslast,cusadress,cusmail,degis;
	int cuscon,day,month,year;
	int dday,mmonth,yyear,katal,don,re,fe;
	string first,last,adress,mail,usser;
	int daay,moonth,yeear,contact;
	int isbn,numof,ah;
	int i,catbook,schoolnum,pass,df;
	string as,schoolname,booknaa;
	string catname,catcreat;
	string titl,auth,su;
	list<Librarian*> llist;
	list<Librarian*>::iterator lit;
	list<Member*> mlist;
	list<Member*>::iterator mit;
	list<Catalogue*> clist;
	list<Catalogue*>::iterator cit;
	mlist.push_front(new Facultymember("onur","bayram","kayseri","storm@mail",555,5,5,5,5,5,5,"eskisehir",152));
	mlist.push_front(new Facultymember("bekir","bayram","kayseri","storm@mail",555,5,5,5,5,5,5,"eskisehir",153));
	mlist.push_front(new Student("gökhan","aydemir","izmir","gökhan@gmail",852,4,3,1990,4,5,2000,"izmirlisesi",253));
	clist.push_front(new Catalogue("bilimkurgu","onur",0));
	clist.push_front(new Catalogue("tarih","mehmet",0));
	clist.push_front(new Catalogue("ders","ahmethoca",0));
	clist.push_front(new Catalogue("hikaye","hasan",0));
	clist.push_front(new Catalogue("roman","kemalhoca",0));
	clist.push_front(new Catalogue("felsefe","nitche",0));
	llist.push_front(new Librarian("ahmet","özkan","ozkan26","ahmet@mail","eskisehir",1534,53846));
	llist.push_front(new Librarian("mehmet","salih","salih16","salih@bursa","bursa",1245,58479));
menu:
	cout<<" Main Menu"<<endl;
	cout<<"1. librarian Menu\n2.Catalogue Item\n3. Member\n4. Quit\nChoose one:"<<endl;
	cin>>secim;
	system("cls");
	switch(secim){
	case 1:
menu1:
		df=0;
		cout<<"enter the username and password"<<endl;
		cin>>usser>>pass;
		for(lit=llist.begin();lit!=llist.end();lit++)
		{
			if((*lit)->getID()==usser && (*lit)->getpass()==pass)
			{
			df=1;
				break;
			
			}
			
		}
		if(df!=1)
		{
			system("cls");
			cout<<"wrong username of password returning to main menu"<<endl;
			_getch();
			system("cls");
			goto menu;
			
		}
		
		system("cls");
		cout<<"welcome "<<(*lit)->getname()<<endl;
		cout<<"Librarian Menu"<<endl;
		cout<<"1. Add a new member\n2. Issue book to a member\n3. Edit a member\n4. Edit a book\n5. Edit a catalogue\n6 Add a catalogue\n7. Book return\n8. Go back to main menu\nChoose one:"<<endl;
		cin>>secim1;
		system("cls");
		switch(secim1){
		case 1:
			
			cout<<"New member"<<endl;
			cout<<"enter name"<<endl;
			cin>>cusfirst;
			cout<<"enter lastname"<<endl;
			cin>>cuslast;
			cout<<"enter contact number"<<endl;
			cin>>cuscon;
			cout<<"enter adress"<<endl;
			cin>>cusadress;
			cout<<"enter mail adress"<<endl;
			cin>>cusmail;
			cout<<"enter today's date(example:16 enter 05 enter 1990 enter)"<<endl;
			cin>>day>>month>>year;
			cout<<"enter your birthday's date"<<endl;
			cin>>dday>>mmonth>>yyear;
			cout<<"is this a student or faculty member?(s or f)"<<endl;
			cin>>as;
		
				
						if(as=="s")
			{
				cout<<"enter schools name"<<endl;
				cin>>schoolname;
				cout<<"enter school number"<<endl;
				cin>>schoolnum;
			mlist.push_front(new Student(cusfirst,cuslast,cusadress,cusmail,cuscon,day,month,year,dday,mmonth,yyear,schoolname,schoolnum));
			}
						else
						{
							cout<<"enter faculty's name"<<endl;
							cin>>schoolname;
							cout<<"enter employee number"<<endl;
							cin>>schoolnum;
				mlist.push_front(new Facultymember(cusfirst,cuslast,cusadress,cusmail,cuscon,day,month,year,dday,mmonth,yyear,schoolname,schoolnum));
						}
			cout<<"press any key to return main menu"<<endl;
			_getch();
			system("cls");
			goto menu1;
			break;
		
	case 2:
menu2:
		
		cout<<"chose one catalogue(example:for first 1)"<<endl;
		for(cit=clist.begin();cit!=clist.end();cit++)
			{
			(*cit)->showdescription();
			}
		cin>>katal;
		cit=clist.begin();
		for(don=1;don<=katal;don++,cit++)
		{
		}
		(*cit)->showbooks();
		cout<<"choose one book"<<endl;
		cin>>re;
		for(mit=mlist.begin();mit!=mlist.end();mit++)
			{
			cout<<(*mit)->getname()<<endl;
		}
		cout<<"choose one member"<<endl;
		cin>>fe;
		mit=mlist.begin();
		for(don=1;don<=fe;don++,mit++)
		{
			
		}
		(*cit)->issuebok(re,(*mit));
		cout<<"press any key to return librarian menu"<<endl;
		_getch();
		system("cls");
		goto menu1;
		break;
	case 3:
menu3:

		for(mit=mlist.begin();mit!=mlist.end();mit++)
			{
			(*mit)->getname();
		}
		cout<<"choose one member"<<endl;
		cin>>fe;
		for(don=1;don<=fe;don++,mit++)
		{
			
		}
		cout<<"what do you want to change(enter lower letters,you cant change the date member created)"<<endl;
		(*mit)->show();
		cin>>degis;
		if(degis=="name")
		{
			cout<<"enter new name"<<endl;
			cin>>first;
			(*mit)->setname(first);
		}
		else if(degis=="lastname")
		{
			cout<<"enter new lastname"<<endl;
			cin>>last;
			(*mit)->setlastname(last);
		}
		else if(degis=="adress")
		{
			cout<<"enter new adress"<<endl;
			cin>>adress;
			(*mit)->setadress(adress);
		}
		else if(degis=="mail")
		{
			cout<<"enter new mail"<<endl;
			cin>>mail;
			(*mit)->setmail(mail);
		}
		else if(degis=="contact")
		{
		cout<<"enter new contact number(ex:05556667788)"<<endl;
		cin>>contact;
		(*mit)->setcontac(contact);
		}
		else if(degis=="birthday")
		{
			cout<<"enter new date(example: 15 enter 05 enter 1995)"<<endl;
			cin>>daay>>moonth>>yeear;
			(*mit)->setbirtdate(daay,moonth,yeear);
		}
		cout<<"press any key to return librarian menu"<<endl;
		_getch();
		system("cls");
		goto menu1;
		break;
	case 4:
menu4:
		cit=clist.begin();
		
		for(cit=clist.begin();cit!=clist.end();cit++)
		{
			(*cit)->showdescription();

		}
		cout<<"chose one catalogue(example:for first 1)"<<endl;
		cin>>katal;
		cit=clist.begin();
		for(don=1;don<=katal;don++)
		{cit++;
		}
		(*cit)->showbooks();
		cout<<"choose one book"<<endl;
		cin>>re;
		(*cit)->editbook(re);
		cout<<"press any key to return librarian menu"<<endl;
		_getch();
		system("cls");
		
		goto menu1;
		break;
	case 5:
menu5:
		cit=clist.begin();
		
		for(cit=clist.begin();cit!=clist.end();cit++)
		{
			(*cit)->showdescription();
			cout<<"\n\n"<<endl;
		}
		cout<<"chose one catalogue(example:for first 1)"<<endl;
		cin>>katal;
		cit=clist.begin();
		for(don=1;don<katal;don++,cit++)
		{
		}
		cout<<"\n1.remove a book\n2.add a book\n3.delete catalogue\n"<<endl;
		cin>>secim2;
		switch(secim2){
		case 1:
menu6:

		(*cit)->showbooks();
		cout<<"\nchoose the book u want to remove(example prees 1 for first book)"<<endl;
		cin>>bir;
		(*cit)->removebook(bir);
		cout<<"press any key to return librarian menu"<<endl;
		_getch();
		system("cls");
		
		goto menu1;
		break;
		case 2:
menu7:
			cout<<"enter the title of book"<<endl;
			cin>>titl;
			cout<<"enter the author of the book"<<endl;
			cin>>auth;
			cout<<"enter the sub of the book"<<endl;
			cin>>su;
			cout<<"enter the ISBN of the book"<<endl;
			cin>>isbn;
			cout<<"enter the number of copies"<<endl;
			cin>>numof;
			(*cit)->addbook(titl,auth,su,isbn,numof);
			_getch();
			cout<<"press any key to return librarian menu"<<endl;
		system("cls");
		
		goto menu1;
		break;
		case 3:
			(*cit)->~Catalogue();
			_getch();
		system("cls");
		
		goto menu1;
		break;
		}
	case 6:
		cout<<"enter name of the catalogue"<<endl;
		cin>>catname;
		cout<<"enter name of the creater"<<endl;
		cin>>catcreat;
		clist.push_front(new Catalogue(catname,catcreat,0));
		_getch();
		system("cls");
			goto menu1;
			break;
	case 7:
		cout<<"Members of this library"<<endl;
			for(mit=mlist.begin();mit!=mlist.end();mit++)
			{
				(*mit)->show();
				cout<<"\n\n"<<endl;
			}
			cout<<"\n\n First choose a member(press 1 for first)"<<endl;
			cin>>ah;
			mit=mlist.begin();
			for(don=1;don<ah;ah++,mit++)
			{
			}
			cout<<"enter the name of book u brough back"<<endl;
			cin>>booknaa;
			for(cit=clist.begin();cit!=clist.end();cit++)
			{
			(*cit)->search(booknaa,(*mit));
			}

	case 8:
		system("cls");
		goto menu;
		break;
		}
		case 2:
menu8:
			cout<<"Catalogue Items(if u want to add books to a catalogue please ask an librarian)\n"<<endl;
			for(cit=clist.begin();cit!=clist.end();cit++)
			{   cout<<(*cit)->getname()<<endl;
				(*cit)->showbooks();
				cout<<"\n\n"<<endl;
			}
			cout<<"press any key to return main menu"<<endl;
			_getch();
	system("cls");
		goto menu;
		break;
		case 3:
			cout<<"Member menu"<<endl;
			
			cout<<"Members of this library"<<endl;
			for(mit=mlist.begin();mit!=mlist.end();mit++)
			{
				(*mit)->show();
				cout<<"\n\n"<<endl;
			}
			cout<<"\n\n First choose a member(press 1 for first)"<<endl;
			cin>>ah;
			mit=mlist.begin();
			for(don=1;don<ah;ah++,mit++)
			{
			}
			system("cls");
			cout<<"book of this member rode"<<endl;
			(*mit)->getlistofbooksissued();

			
			cout<<"\npress any key to return main menu"<<endl;
			_getch();
	system("cls");
		goto menu;
		break;	
				
	}
	

	return 0;
}
