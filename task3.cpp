#include<iostream>
using namespace std;
main() {
int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout<< "Enter  Initial velocity ";
cin>>initialVelocity;
cout<< "Enter Time: ";
cin>>time;
cout<< "Enter Acceleration: ";
cin>>acceleration;
finalVelocity=(acceleration*time)+initialVelocity;
cout<< "Final velocity is: "<<finalVelocity;
}
 

