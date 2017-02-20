#include<iostream.h>
#include<conio.h>
void main()
{
int n,sum=0,avg,i=0;
char c;
clrscr();
do
{
cout<<"enter n:";
cin>>n;
sum=sum+n;
cout<<"you want to continue : y or Y";
cin>>c;
i++;
}
while(c=='y'||c=='Y');
avg=sum/i;
cout<<"average="<<avg<<"sum="<<sum;
getch();
}




