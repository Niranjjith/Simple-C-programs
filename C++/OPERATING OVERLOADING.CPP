#include<iostream.h>
#include<conio.h>
#include<string.h>
class FLOAT
{
public:
float a,b,c,d,e,f;
void get();
float operator+();
float operator-();
float operator*();
float operator/(int a);
void display();
};
void FLOAT::get()
{
cout<<"In Enter the value a: ";
cin>>a;
cout<<"In Enter the value b: ";
cin>>b;
}
float FLOAT::operator+()
{
c=a+b ;
return(c);
}
float FLOAT::operator-()
{
d=a-b;
return(d);
}
float FLOAT::operator*()
{
e=a*b;
return(e);
}
float FLOAT::operator/(int a)
{
f=a/b;
return(f);
}
void FLOAT::display()
{
cout<<"\n The sum is: "<<c;
cout<<"\n The difference is: "<<d;
cout<<"\n The product is: "<<e;
cout<<"\n The division is: "<<f;
}
void main()
{
clrscr();
FLOAT f;
float w;
f.get();
f.operator+();
f.operator-();
f.operator*();
f.operator/(w);
f.display();
getch();
}