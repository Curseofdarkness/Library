#include "Student.h"


Student::Student(string a="unknown",string b="unknown",string c="unknown",string d="unknown",int f=0,int g=0,int h=0,int j=0,int z=0,int x=0,int v=0,string q="unknown",int w=0):Schoolname(q),Schoolnumber(w){
	setname(a);
	setlastname(b);
	setadress(c);
	setmail(d);
	setcontac(f);
	setmemdate(g,h,j);
	setbirtdate(z,x,v);
}

void Student::Checkoutbook()
{
	getissuing();
}
int Student::getid()
{
	return Schoolnumber;
}

