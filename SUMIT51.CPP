#include<iostream.h>
#include<conio.h>
class student
		{
		 char n[30];
		 int rn;
		 char d[10];
		 public:
			void getdata();
			void displaydata();
		}s1,s2;
void main()
 {
	clrscr();
	cout<<"enter your details of student 1:\n";
	s1.getdata();
	cout<<"enter your details of student 2:\n";
	s2.getdata();
	cout<<"entered details for student 1 are:\n";
	s1.displaydata();
	cout<<"entered details for student 2 are:\n";
	s2.displaydata();
	getch();
 }

void student::getdata()
  {
	 cout<<"enter name: ";
	 cin>>n;
	 cout<<"enter rollnumber: ";
	 cin>>rn;
	 cout<<"enter division: ";
	 cin>>d;
  }
void student::displaydata()
  {
	 cout<<"name is "<<n
	     <<"\nrollnumber is "<<rn
	     <<"\ndivision is "<<d<<"\n";

  }




