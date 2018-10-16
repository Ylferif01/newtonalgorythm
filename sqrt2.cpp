#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h> 
using namespace std;

main()
{
	float a,x,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,y,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16,y17,y18,y19,y20,y21,y22,y23,y24,y25;
	
	start:
		
		a=0;
		system("color 0b");
		system("cls");
		cout<<"Provide the value of sqrt(a):"<<endl;
		cin>>a;
		x= a/2;
		if(a<0)goto subzero;
		if(a==0)goto zero;
		if(a>0)goto sqrt;
		
		subzero:
			
			system("cls");
			cout<<"No square roots for a<0"<<endl;
			cout<<"Press any button to continue.";
			getch();
			goto start;
		
		zero: 
		
			system("cls");
			cout<<"The square root of 0 equals 0"<<endl;
			cout<<"Press any button to continue.";
			getch();
			goto start;
		
		sqrt:
			
			system("cls");
			
			x1 = 0.5 * (x + a/x);
			x2 = 0.5 * (x1 + a/x1);
			x3 = 0.5 * (x2 + a/x2);
			x4 = 0.5 * (x3 + a/x3);
			x5 = 0.5 * (x4 + a/x4);
			x6 = 0.5 * (x5 + a/x5);
			x7 = 0.5 * (x6 + a/x6);
			x8 = 0.5 * (x7 + a/x7);
			x9 = 0.5 * (x8 + a/x8);
			x10 = 0.5 * (x9 + a/x9);
			x11 = 0.5 * (x10 + a/x10);
			x12 = 0.5 * (x11 + a/x11);
			x13 = 0.5 * (x12 + a/x12);
			x14 = 0.5 * (x13 + a/x13);
			x15 = 0.5 * (x14 + a/x14);
			x16 = 0.5 * (x15 + a/x15);
			x17 = 0.5 * (x16 + a/x16);
			x18 = 0.5 * (x17 + a/x17);
			x19 = 0.5 * (x18 + a/x18);
			x20 = 0.5 * (x19 + a/x19);
			x21 = 0.5 * (x20 + a/x20);
			x22 = 0.5 * (x21 + a/x21);
			x23 = 0.5 * (x22 + a/x22);
			x24 = 0.5 * (x23 + a/x23);
			x25 = 0.5 * (x24 + a/x24);
			
			y=x25;
			
			y1 = 0.5 * (y + a/y);
			y2 = 0.5 * (y1 + a/y1);
			y3 = 0.5 * (y2 + a/y2);
			y4 = 0.5 * (y3 + a/y3);
			y5 = 0.5 * (y4 + a/y4);
			y6 = 0.5 * (y5 + a/y5);
			y7 = 0.5 * (y6 + a/y6);
			y8 = 0.5 * (y7 + a/y7);
			y9 = 0.5 * (y8 + a/y8);
			y10 = 0.5 * (y9 + a/y9);
			y11 = 0.5 * (y10 + a/y10);
			y12 = 0.5 * (y11 + a/y11);
			y13 = 0.5 * (y12 + a/y12);
			y14 = 0.5 * (y13 + a/y13);
			y15 = 0.5 * (y14 + a/y14);
			y16 = 0.5 * (y15 + a/y15);
			y17 = 0.5 * (y16 + a/y16);
			y18 = 0.5 * (y17 + a/y17);
			y19 = 0.5 * (y18 + a/y18);
			y20 = 0.5 * (y19 + a/y19);
			y21 = 0.5 * (y20 + a/y20);
			y22 = 0.5 * (y21 + a/y21);
			y23 = 0.5 * (y22 + a/y22);
			y24 = 0.5 * (y23 + a/y23);
			y25 = 0.5 * (y24 + a/y24);
			
			cout<<"The approximate sqrt of "<<a<<" is:"<<endl;
			cout<<" "<<endl;
			printf ("%10.30f", y25);
			cout<<" "<<endl;
			printf ("\nPress any button to continue.");
			getch();
			goto start;			
}
