#include<iostream.h>
#include<conio.h>
int fact(int n);
void main()
{
 int n,f;
 clrscr();
 cout<<"enter n"<<endl;
 cin>>n;
 f=fact(n);
 cout<<"factorial of "<<n<<" is "<<f;
 getch();
 }
 int fact(int n)
 {
 int x=1;
 if(n==1)
 {
 return x;
 }
 else
 {
 x=n*fact(n-1);
 return x;
 }
 }