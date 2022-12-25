#include <iostream>
using namespace std;
main(){ 
string name;
int childPrice;
int adultPrice;
int childSold;
int adultSold;
int total;
int remaining;
cout<< "Enter name: ";
cin>>name;
float percentage;
cout<< "Adult ticket price: ";
cin>>adultPrice;
cout<< "Child ticket price: ";
cin>>childPrice;
cout<< "Number of adult tickets sold: ";
cin>>adultSold;
cout<< "Number of child tickets sold: ";
cin>>childSold;
cout<< "Percentage to donate: ";
cin>>percentage;
total=(childPrice*childSold)+(adultPrice*adultSold);
cout<< "Total amount: "<<total;
cout<<endl;
remaining=total-(percentage/100)*total;
cout<< "Remaining amount: "<<remaining;
}


