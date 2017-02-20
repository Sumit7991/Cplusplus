#include<iostream.h>
#include<conio.h>
void swap(int x,int y);
void main()
{
 int a,b,c;
 clrscr();
 cout<<"enter the numbers a and b:"<<endl;
 cin>>a;
 cin>>b;
 swap(a,b);
 cout<<"before swapping, a="<<a<<"b="<<b<<endl;
 getch();
 }
void swap(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<"after swapping, a="<<x<<"b="<<y<<endl;
}

