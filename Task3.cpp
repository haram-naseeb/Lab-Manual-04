#include<iostream>
using namespace std;
void howmanystickers(int n);
main()
{
int n;
cout<<"Enter the side length of the Rubik's cube: ";
cin>>n;
howmanystickers(n);
}
void howmanystickers(int n)
{
int howmanystickers;
howmanystickers=n*n*6;
cout<<"Number of stickers needed: "<<howmanystickers;
} 