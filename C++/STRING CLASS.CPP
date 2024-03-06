#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
public:
char s1[50],s2[50],s3[100];
void get();
void operator=(char s3[100]);
char operator+();
void dis();
};
void string::get()
{
cout<<"In enter 1st string: ";
cin>>s1;
cout<<"In Enter 2nd string: ";
cin>>s2;
}
void string::operator=(char s3[100])
{
if(strcmp(s1,s2)==s3[50])
{
cout<<"\n String are same ";
}
else
{
cout<<"\n String are different ";
}
}
char string::operator+()
{
s3[100]=s1[5]+s2[50];
return(0);
}
void string::dis()
{
cout<<"\n The cancadinated string is: "<<strcat(s1,s2);
}
void main()
{
clrscr();
char x[50];
string s;
s.get();
s.operator=(x);
s.operator+();
s.dis();
getch();
}