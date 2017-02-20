#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,a;
clrscr();
cout<<"enter the number to get a multiplication table of it:";
cin>>n;
for(i=1;i<=10;i++)
{
 a=n*i;
 cout<<n<<"*"<<i<<"="<<a<<"\n";
}
getch();
}