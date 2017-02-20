#include<iostream.h>
#include<conio.h>
void main()
{
 int a[20],i,sum=0,n;
 clrscr();
 cout<<"enter the number of elements:\n";
 cin>>n;
 cout<<"enter "<<n<<" elements:\n";
 for(i=1;i<=n;i++)
 {
  cin>>a[i];
 }
 for(i=1;i<=n;i++)
 {
  sum=sum+a[i];
 }
 cout<<"sum of "<<n<<" elements is "<<sum;
 getch();
 }