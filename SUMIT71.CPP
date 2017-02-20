#include<iostream.h>
#include<conio.h>
class base
{
 int a;
 public:
      void getdata1()
      {
       cout<<"enter variable 1: ";
       cin>>a;
      }
      int get()
      {
      return a;
      }
      void display1()
      {
       cout<<"variable 1 is: "<<a;
      }
};
class derive:public base
{
 int b;
 public:
       void getdata2()
       {
	getdata1();
	cout<<"enter variable 2: ";
	cin>>b;
       }

       void display2()
       {
	display1();
	cout<<"\nvariable 2 is: "<<b;
	cout<<"\nsum is: "<<get()+b;
       }
};
void main()
{
 clrscr();
 derive d;
 d.getdata2();
 d.display2();
 getch();
}
