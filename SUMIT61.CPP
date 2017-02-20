#include<iostream.h>
#include<conio.h>
class test
{
  static int count;
  int a;
 public:
	 test();
	 ~test();
	 void display();
};
int test::count;
test::test()
{
  cout<<"\nin constructor:\n";
  cout<<"enter value of a: ";
  cin>>a;
  count++;
}
void test::display()
{
  cout<<"value of a: "<<a;
  cout<<"value of count: "<<count;
}
test::~test()
{
 cout<<"\nin destructor: ";
 cout<<"\nvalue of a: "<<a<<"\n";
 count--;
 cout<<"value of count: "<<count;
}
void main()
{
 clrscr();
 test t1;
 t1.display();
 test t2;
 t2.display();
  {
   test t3;
   t3.display();
  }
 test t4;
 t4.display();
 getch();
}
