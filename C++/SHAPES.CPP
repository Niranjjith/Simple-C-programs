#include<iostream.h>
#include<conio.h>
#include<math.h>
class shape
{
public:
float a,b,c,d,e,h,l,ar,pr;
virtual void callarea(){};
virtual void callperi(){};
};
class square:public shape
{
public:
void get()
{
cout<<"\nSquare ";
cout<<"\nEnter the size: ";
cin>>l;
}
void callarea()
{
ar=l*l;
}
void callperi()
{
pr=4*l;
}
void dis()
{
cout<<"\nThe area of square is "<<ar;
cout<<"\nThe perimeter of square is :"<<pr<<endl;
}
};
class rectangle :public shape
{
public:
void get()
{
cout<<"\n Rectangle";
cout<<"\n Enter the depth:";
cin>>d;
cout<<"\n Enter the Breadth: ";
cin>>e;
};
void callarea()
{
ar=d*e;
}void callperi()
{
pr=2*(d+e);
}
void dis()
{
cout<<"\nThe area of rectangle is :"<<ar;
cout<<"\nThe perimeter of rectangle is:"<<pr<<endl;
}
};
class triangle:public shape
{
public:
void get()
{
cout<<"\nTriangle ";
cout<<"\nEnter the value of a&d&c:";
cin>>a>>b>>c;
cout<<"\nEnter the value of n:";
cin>>h;
}
void callarea()
{
ar=(b*h)/2;
}
void callperi()
{
pr=a+b+c;
}
void dis()
{
cout<<"\n The area of Triangle :"<<ar;
cout<<"\n The perimeter of a Triangle is :"<<pr;
}};
void main()
{
clrscr();
square s;
s.get();
s.callarea();
s.callperi();
s.dis();
rectangle r;
r.get();
r.callarea();
r.callperi();
r.dis();
triangle t;
t.get();
t.callarea();
t.callperi();
t.dis();
getch();
}
