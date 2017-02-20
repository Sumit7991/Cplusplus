#include<iostream.h>
#include<conio.h>
class complex
		{
		 int a,b;
		 public:
				 complex()
				 {
				  cout<<"enter a complex number:\n";
				  cout<<"enter real part: ";
				  cin>>a;
				  cout<<"enter imaginary part: ";
				  cin>>b;
				 }
				 complex(complex &x)
				 {
				  cout<<"in copy constructor\n";
				  a=x.a;
				  b=x.b;
				 }
				 void display()
				 {
				  cout<<"complex number is: "<<a<<" + "<<b<<"i\n";
				 }
		 };
void main()
{
 clrscr();
 complex x;
 cout<<"entered complex number is:\n";
 x.display();
 complex y(x);
 cout<<"copied complex number:\n";
 y.display();
 getch();
}
