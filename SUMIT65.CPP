#include<iostream.h>
#include<conio.h>
class add
{
 int real,imag;
 public:
       add()
       {}
       add(float x,float y)
       {
	real=x;
	imag=y;
       }
       friend add operator+(add,add);
       void display()
       {
	cout<<real<<" + i"<<imag;
       }
};
add operator+(add a,add b)
{
 add temp;
 temp.real=a.real+b.real;
 temp.imag=a.imag+b.imag;
 return temp;
}
int main()
{
  clrscr();
  add s1(2,3),s2(3,2),s3;
  s3=s1+s2;
  cout<<"after addition ,complex number is: ";
  s3.display();
  getch();
}
