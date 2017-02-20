#include<iostream.h>
#include<conio.h>
void main()
{
int o,a,b,c;
clrscr();
cout<<"enter value of a and b:\n";
cin>>a>>b;
cout<<"operation 1: add"<<" operation 2: subtract\n";
cout<<"enter operation number:";
cin>>o;

switch(o)
{
 case 1:
			c=a+b;
			cout<<c<<"is addition";
			break;

 case 2:
			c=a-b;
			cout<<c<<"is substration";
			break;
 default:
			cout<<"enter valid operation";
			break;
 }
 getch();
 }

