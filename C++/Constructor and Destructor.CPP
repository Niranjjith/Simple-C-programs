#include<iostream.h>
class DigitSum{
private:
int number;
//inline member function to calculate the sum of digits
inline int calculateSumOfDigits(int num){
int sum=0;
while(num>0){
sum+=num%10;
num/=10;
}
return sum;
}
public:
//constructor to iniltialize the number
DigitSum(int num):number(num){
cout<<"Number initialized: "<<number<<endl;
}
//Destructor to display the final result
~DigitSum(){
cout<<"Final digit sum; "<<number<<endl;
}
//inline member function to reduce the number to a single digit
inline void reduceToSingleDigit(){
while(number>=10){
number=calculateSumOfDigits(number);
}
}
};
int main(){
int inputNumber;
cout<<"Enter an integer number: ";
cin>>inputNumber;
//create an object of DigitSum clans
DigitSum digitSumObj(inputNumber);
//Reduce the number to a single digit
digitSumObj.reduceToSingleDigit();
return 0;
}