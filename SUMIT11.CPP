#include<iostream.h>
#include<conio.h>
void main()
{
 int r;
 char n[20],d[5],a[30];
 clrscr();
 cout<<"enter your name: ";
 cin>>n;
 cout<<"enter your roll number: ";
 cin>>r;
 cout<<"enter your division: ";
 cin>>d;
 cout<<"enter your address: ";
 cin>>a;
 cout<<"entered details are:\n";
 cout<<"your name is: "<<n
     <<"\nyour rollnumber is: "<<r
     <<"\nyour division is: "<<d
     <<"\nyour address is: "<<a;
 getch();
 }