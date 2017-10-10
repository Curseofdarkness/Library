#include "Facultymember.h"


Facultymember::Facultymember(string a="unknown",string b="unknown",string c="unknown",string d="unknown",int f=0,int g=0,int h=0,int j=0,int z=0,int x=0,int v=0,string q="unknown",int w=0):Collegename(q),EmplyeeID(w){
	setname(a);
	setlastname(b);
	setadress(c);
	setmail(d);
	setcontac(f);
	setmemdate(g,h,j);
	setbirtdate(z,x,v);
}

void Facultymember::Checkoutbook()
{
	getissuing();
}
int Facultymember::getid()
{
	return EmplyeeID;
}
