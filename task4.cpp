#include<iostream>
using namespace std;
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(float a,float b);
main()
{
	int a,b;
	char op;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter an operator (+,-,/,*): ";
	cin>>op;
	if(op=='+')
	  add (a, b);
	if(op=='-')
	  sub(a, b);
	if(op=='*')
	  mul(a, b);
	if(op=='/')
	  div(a, b);
}
void add(int a,int b)
{
int sum;
sum=a+b;
cout<<"Addition: "<<sum;
}
void sub(int a,int b)
{
int sub;
sub=a-b;
cout<<"Subtraction: "<<sub;
}
void mul(int a,int b)
{
int mul;
mul=a*b;
cout<<"Multiplication: "<<mul;
}
void div(float a,float b)
{
float div;
div=a/b;
cout<<"Division: "<<div;
}
