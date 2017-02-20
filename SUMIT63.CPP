#include<iostream.h>
#include<conio.h>
void area(int a,int b);
void area( float a,float b);
void main()
{
 int a,b;
 float m,n;
 clrscr();
 cout<<"enter integer values of a and b:\n";
 cin>>a>>b;
 cout<<"enter float values of m and n:\n";
 cin>>m>>n;
 area(a,b);
 area(m,n);
 getch();
}
void area(int a,int b)
{
 int r;
 r=a*b;
 cout<<"integer area:\n";
 cout<<"area of rectangle: "<<r;
}
void area(float a,float b)
{
 float r;
 r=a*b;
 cout<<"\nfloat area:\n";
 cout<<"area of rectangle: "<<r;
}

