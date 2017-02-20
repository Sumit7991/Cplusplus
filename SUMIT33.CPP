#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b);
void main()
{
 int a,b;
 int &p=a;
 int &q=b;
 cout<<"enter value of a and b:"<<endl;
 cin>>p>>q;
 cout<<"before swapping,a="<<p<<"b="<<q<<endl;
 swap(p,q);
 getch();
 }
void swap(int &a,int &b)
{
 int t;
 t=a;
 a=b;
 b=t;
 cout<<"after swapping,a="<<a<<"  "<<"b="<<b;
 }

