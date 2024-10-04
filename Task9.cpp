#include<iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
calculateFuel(distance);
}
void calculateFuel(float distance)
{
float calculateFuel;
calculateFuel=(distance*10);
if(calculateFuel<100)
  cout<<"Fuel needed: 100";
if(calculateFuel>100)
  cout<<"fuel needed: "<<calculateFuel;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    