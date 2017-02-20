#include<iostream.h>
#include<conio.h>
class test
     {
      int a;
      public:
	     void operator++()
	     {
	       a++;
	     }
	     void operator--()
	     {
	      a--;
	     }
	     test(int s)
	     {
	      a=s;
	     }
	     void display()
	     {
	      cout<<a;
	     }
     };
void main()
{
 clrscr();
 test t1(5);
 t1.operator++();
 cout<<"after increment: ";
 t1.display();
 t1.operator--();
 cout<<"\nafter decrement: ";
 t1.display();
 getch();
}
