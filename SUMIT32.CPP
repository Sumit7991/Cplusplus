#include<iostream.h>
#include<conio.h>
void swap(int *p,int *q);
void main()
{
 int *p,*q,a,b;
 clrscr();
 p=&a;
 q=&b;
 cout<<"enter value of a and b:"<<endl;
 cin>>*p>>*q;
 cout<<"before swapping,a="<<*p<<"b="<<*q<<endl;
 swap(&a,&b);
 getch();
 }
void swap(int *p,int *q)
{
 int c,*t;
 t=&c;
 *t=*p;
 *p=*q;
 *q=*t;
 cout<<"after swapping,a="<<*p<<"b="<<*q;
 }

