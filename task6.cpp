#include<iostream>
using namespace std;
main(){
int bagInPounds;
int costOfBag;
int areaCoveredByBag;
int costOfFertilizerPerPound;
int costOfFertilizerPerSquareMeter;
cout<<" Enter bag size in pounds: " ;
cin>>bagInPounds;
cout<< "Enter cost of bag: ";
cin>> costOfBag;
cout<<"Enter area covered by each bag in square feet: ";
cin>>areaCoveredByBag;
cout<<" ________________________________________________________________";
cout<<endl;

costOfFertilizerPerPound=costOfBag/bagInPounds;
cout <<" Cost of fertilizer per pound: "<<costOfFertilizerPerPound;
cout<<endl;
costOfFertilizerPerSquareMeter=costOfBag/areaCoveredByBag;
cout<<" Cost of fertilizer per square meter : " <<costOfFertilizerPerSquareMeter;



}

