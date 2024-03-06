#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int a,i;
char s1[10],*s2[10];
cout<<"\nEnter the String: ";
cin>>s1;
strcpy(*s2,s1);
strrev(s1);
a=strlen(s1);
i=strcmp(s1,*s2);
if(i==0)
{
cout<<"\nThe String is palindrome";
}
else
{
cout<<"\nThe is not palindrome";
}
cout<<"\nThe length of the string is:"<<a;
getch();
}