#include<iostream.h>
#include<conio.h>
void main()
{
int m,d,rd;
clrscr();
cout<<"enter number of days:\n";
cin>>d;
m=d/30;
rd=d%30;
cout<<"number of months in "<<d<<"  days are "<<m<<" and remaining days are "<<rd;
getch();
}

