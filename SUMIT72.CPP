#include<iostream.h>
#include<conio.h>
class A
{
 int a;
 public:
	void getdata1()
	{
	 cout<<"enter value of a: ";
	 cin>>a;
	}
	int geta()
	{
	 return a;
	}
};
class B
{
 int b;
 public:
	void getdata2()
	{
	 cout<<"enter value of b: ";
	 cin>>b;
	}
	int getb()
	{
	 return b;
	}
};
class C:public A,public B
{
 int c;
 public:
	void getdata()
	{
	 getdata1();
	 getdata2();
	}
	void display()
	{
	 c=geta()+getb();
	 cout<<"sum of value from class A and value from class B is: "<<c;
	}
};
void main()
{
 clrscr();
 C obj;
 obj.getdata();
 obj.display();
 getch();
}


