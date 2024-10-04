#include<iostream>
using namespace std;
void totalpayableamount(string day, int purchase_amount);
main()
{
  string day;
  int purchase_amount; 
  cout<<"Enter the day of purchase: ";
  cin>>day;
  cout<<"Enter the total purchase amount: $";
  cin>> purchase_amount;
  totalpayableamount(day, purchase_amount);
}
void totalpayableamount(string day, int purchase_amount)
{
int totalpayableamount;
if(day=="sunday")
{
totalpayableamount=purchase_amount-(purchase_amount*0.1);
cout<<"Payable amount: $"<<totalpayableamount;
}
if(day!="sunday")
{
cout<<"Payable amount: $"<<purchase_amount;
}
}