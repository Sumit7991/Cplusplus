#include<iostream.h>
#include<conio.h>
void main()
{
 int a,n,temp,sum=0;
 clrscr();
 cout<<"enter a number:";
 cin>>n;
 temp=n;
 while(temp != 0)
 {
 	a=temp%10;
     sum=sum+a;
     temp=temp/10;
 }
 cout<<"sum of digits of "<<n<<" is "<<sum;
 getch();
 }

