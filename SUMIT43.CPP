#include<iostream.h>
#include<conio.h>
#include<string.h>
struct student1
      {
	char n[20];
	int r;
	int a;
      }s1;
struct student2
      {
	char n[20];
	int r;
	int a;
      }s2;
void main()
{
 clrscr();
 cout<<"enter name: ";
 cin>>s1.n;
 cout<<"enter enrollment number: ";
 cin>>s1.r;
 cout<<"enter age: ";
 cin>>s1.a;
 cout<<"entered data for s1 is:\n";
 cout<<"name is "<<s1.n<<"\nroll number is "<<s1.r<<"\nage is "<<s1.a<<"\n";
 strcpy(s2.n,s1.n);
 s2.r=s1.r;
 s2.a=s1.a;
 cout<<"copied data in s2 is:\n";
 cout<<"name is "<<s2.n<<"\nroll number is "<<s2.r<<"\nage is "<<s2.a;
 getch();
 }




