#include<iostream.h>
//#include<conio.h>
void main()
{
 float cm,m,in,km,ft;
 int o;
 //clrscr();
 cout<<"enter value in centimeters:\n";
 cin>>cm;
 cout<<"select the option.You can convert centimeter in:\n"
     <<"1.meters 2.inches 3.kilometers 4.feet\n";
 cin>>o;
 switch(o)
       {
	case 1:
	      m=cm/100;
	      cout<<cm<<" centimeters = "<<m <<"meters";
	      break;
	case 2:
	      in=cm/2.54;
	      cout<<cm<<" centimeters = "<<in <<"inches";
	      break;
	case 3:
	      km=cm/100000;
	      cout<<cm<<" centimeters = "<<km <<"kilometers";
	      break;
	case 4:
	      ft=cm/30.48;
	      cout<<cm<<" centimetrs = "<<ft <<"feet";
	      break;
	default:
	      cout<<"invalid selection";
	      break;
       }
 //getch();

 
 }
