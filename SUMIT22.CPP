#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"enter value of a,b,c\n";
cin>>a>>b>>c;
if(a>b)
{
	 if(a>c)
		 {
			 cout<<a<<"is greater";
		 }
	 else
		 {
			 cout<<c<<"is greater";
		 }
}
else
{
	if(b>c)
			 {
				cout<<b<<"is greater";
			 }
	else
			 {
				cout<<c<<"is greater";
			 }
}
getch();
}

