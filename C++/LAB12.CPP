#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream a;
char x[50];
a.open("aaa",ios::out);
cout<<"\nEnter the content for file1:";
cin.getline(x,50);
a<<x;
a.close();
ofstream b;
char y[50];
b.open("bbb",ios::out);
cout<<"\nEnter the content for file2: ";
cin.getline(y,50);
b<<y;
b.close();
ofstream c;
ifstream d;
ifstream e;
ifstream f;
c.open("ccc",ios::in);
char z[100];
d.open("aaa",ios::in);
cout<<"\n\t\t";
c<<x;
d.close();
e.open("bbb",ios::in);
c<<y;
e.close();
c.close();
ifstream();
f.open("ccc",ios::in);
while(f.eof()==0);
{
f>>x;
f>>y;
cout<<x<<y;
}
f.close();
getch();
}


