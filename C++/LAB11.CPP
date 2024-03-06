#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream a;
char x[5];
a.open("kkk",ios::out);
a.close();
a.open("kkk",ios::app);
cout<<"\nEnter the input: \n";
cin.read(x,5);
a<<x;
a.close();
ifstream b;
b.open("kkk",ios::in);
int r=1;
while(b.eof()==0)
{
cout<<"\n"<<r;
b>>x;
cout<<x<<endl;
r++;
}
getch();
}