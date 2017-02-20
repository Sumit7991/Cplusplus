#include<iostream.h>
#include<conio.h>
class counter
 {
  int n;
  static int count;
  public:
	 void getdata();
	 void putdata();
 }c1,c2,c3;
int counter::count;
 void main()
 {
  clrscr();
  c1.getdata();
  cout<<"value of counter is: ";
  c1.putdata();
  cout<<"\n";
  c2.getdata();
  cout<<"\nnew value of counter is: ";
  c2.putdata();
  cout<<"\n";
  c3.getdata();
  cout<<"new value of counter is: ";
  c3.putdata();
  getch();
 }
 void counter::getdata()
	  {
			cout<<"enter integer: ";
			cin>>n;
			count++;
	  }
 void counter::putdata()
	  {
			cout<<count;
	  }