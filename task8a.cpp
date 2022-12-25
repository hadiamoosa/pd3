#include <iostream>
using namespace std;
main(){ 
float vegpricekg;
float fruitpricekg ;
int totalkgveg;
int totalkgfruit;
float earnings;
cout<< "Vegetable price per kg: ";
cin>>vegpricekg;
cout<< "Fruit price per kg: ";
cin>>fruitpricekg;
cout<< "Total  kg of veg: ";
cin>>totalkgveg;
cout<< "Total kg of fruit: ";
cin>>totalkgfruit;
earnings=(vegpricekg*totalkgveg)+(fruitpricekg*totalkgfruit);
cout<<endl;
cout<< "Total earnings: "<<earnings;
}
