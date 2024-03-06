#include<iostream.h>
#include<conio.h>
class stack
{
int a[20],size,i,top;
public:
stack(int n)
{
size=n;
top=0;
}
~stack()
{
cout<<"object destroyed ";
}
void push();
void pop();
void list();
};
void stack::push()
{
if(top<size)
{
cout<<"Enter the element to push "<<"\n";
cin>>a[top];
top++;
}
else
cout<<"Stack is full "<<"\n";
}
void stack::pop()
{
if(top==0)
{
cout<<"Stack  is empty "<<"\n";
}
else
cout<<"Poped element is : "<<a[top-1]<<"\n";
top--;
}
void stack::list()
{
if(top==0)
{
cout<<"stack is empty "<<"\n";
}
else
cout<<"The list is "<<"\n";
for (i=top-1;i<=0;i++)
cout<<a[i]<<"\n";
}
void main()
{
int x,ch;
clrscr();
cout<<"Enter the size of stack "<<"\n";
cin>>x;
{
stack s(x);
do
{
cout<<"push"<<"\n";
cout<<"pop"<<"\n";
cout<<"list"<<"\n";
cout<<"exit"<<"\n";
cout<<"Enter the choice : ";
cin>>ch;
switch(ch)
{
case 1:
s.push();
break;
case 2:
s.pop();
break;
case 3:
s.list();
break;
}
}
while(ch>0&&ch<=4);
}
getch();
}