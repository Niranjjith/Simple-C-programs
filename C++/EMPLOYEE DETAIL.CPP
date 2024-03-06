#include<iostream.h>
#include<conio.h>
#include<process.h>
class emp
{
public:
int eno,bp;
char name[10],q,dep[10],grade;
void get();
};
class pay:public emp
{
public:
float hra,da,qp,np,pf;
void call();
void disp();
};
void emp::get()
{
cout<<"In it Pay Slip: ";
cout<<"In Enter the Emp no: ";
cin>>eno;
cout<<"In Enter the name: ";
cin>>name;
cout<<"In Enter the Basic Pay: ";
cin>>bp;
cout<<"In Enter the department: ";
cin>>q;
}
void pay::call()
{
if(q=='a'||q=='A')
{
hra=bp*0.25;
da=bp*0.040;
pf=bp*0.125;
}
else
if(q=='b'||q=='B')
{
hra=bp*0.20;
da=bp*0.30;
pf=bp*0.125;
}
if(q=='c'||q=='c')
{
hra=bp*0.15;
da=bp*0.20;
pf=bp*0.25;
}
qp=bp+da+hra;
np=qp-pf;
}
void pay::disp()
{
cout<<"In The pf is: "<<pf;
cout<<"\n The hra is: "<<hra;
cout<<"\n The qress pay is: "<<qp;
cout<<"\n The next pay is "<<np;
}
void main()
{
clrscr();
pay p;
p.get();
p.call();
p.disp();
getch();
};