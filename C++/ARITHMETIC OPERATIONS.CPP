#include<iostream.h>
#include<conio.h>
class ARITHMETIC{
private:
float FLOAT;
int INTEGER;
public:
void getValues(){
cout<<"Enter FLOAT value: ";
cin>>FLOAT;
cout<<"Enter INTEGER value: ";
cin>>INTEGER;
}
void displayValues(){
cout<<"FLOAT: "<<FLOAT<<endl;
cout<<"INTEGER: "<<INTEGER<<endl;
}
void ADD(){
cout<<"Sum: "<<FLOAT+INTEGER<<endl;
}
void SUB(){
cout<<"Difference: "<<FLOAT-INTEGER<<endl;
}
void MULTI(){
cout<<"Product: "<<FLOAT * INTEGER<<endl;
}
void DIV(){
if(INTEGER !=0)
cout<<"Quotient: "<<FLOAT/INTEGER<<endl;
else
cout<<"Cannot divide by zero "<<endl;
}
};
int main(){
clrscr();
ARITHMETIC obj;
obj.getValues();
obj.displayValues();
obj.ADD();
obj.SUB();
obj.MULTI();
obj.DIV();
getch();
return 0;
}


