#include<iostream>
using namespace std;
main(){
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float percentage;
cout <<"Enter subject1 marks: ";
cin >>sub1;
cout<<"Enter subject2 marks: ";
cin>>sub2;
cout<< "Enter subject3 marks: ";
cin>>sub3;
cout<<" Enter subject4 marks: ";
cin>>sub4;
cout<< "Enter subject5 marks: ";
cin>>sub5;
percentage=((sub1/500)*100)+((sub2/500)*100)+((sub3/500)*100)+((sub4/500)*100)+((sub5/500)*100);
cout<< "Your percentage : "<<percentage;
}


