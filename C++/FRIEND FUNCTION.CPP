#include<iostream.h>
#include<conio.h>
class add
{
public:
int i,j,m,n,a[10][10];
int b[10][10],c[10][10];
void get();
float matrix();
int matrix(int x);
void sum();
void disp();
};
void add::get()
{
cout<< "\n Enter the order of matrix:";
cin>>m;
}
int add::matrix(int x)
{
cout<<"\n Enter the value for matrix A:";
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
cout<<"\n\t";
cin>>a[i][j];
}
cout<<"\n";
}
return(x);
}
float add::matrix()
{
cout<<"\n Enter the value for matrix B:";
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
cout<<"\n\t";
cin>>b[i][j];
}
cout<<"\n";
}
return(0);
}
void add::sum()
{
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
}
void add::disp()
{
int p=0;
float q,r;
q=r=0;
cout<<"\n Matrix A \n\n";
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<a[i][j];
}
cout<<"\n";
}
cout<<"\n Matrix B\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<b[i][j];
}
cout<<"\n";
}
cout<<"\n The sum of above matrix:\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
cout<<"\t"<<c[i][j];
p=p+a[i][j];
q=q+b[i][j];
r=r+c[i][j];
}
cout<<"\n";
}

cout<<"\n The individual sum of marix A:"<<p;
cout<<"\n The individual sum of matrix B:"<<q;
cout<<"\n The individual sum of matrix C:"<<r;
}
void main()
{
clrscr();
add a;
int x;
a.get();
a.matrix(x);
a.matrix();
a.sum();
a.disp();
getch();
}