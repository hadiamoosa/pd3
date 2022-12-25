#include<iostream>
using namespace std;
main(){
int num1;
int result1;
int result2;
int result3;
int result4;
int remainder1;
int remainder2;
int remainder3;
int remainder4;
int sum;
cout << "Enter four digit number: ";
cin>>num1;
remainder1=(num1%10);
result1= num1/10;
remainder2=(result1%10);
result2=result1/10;
remainder3=result2%10;
result3=result2/10;
remainder4=result3%10;
sum=remainder1+remainder2+remainder3+remainder4;
cout<<"Sum: "<<sum;
} 



