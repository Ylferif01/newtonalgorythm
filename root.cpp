#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h> 
#include <math.h>
using namespace std;

main()
{
	float a,x,n;
	
	start:
		
		a=0;
		system("color 0c");
		system("cls");
		cout<<"Provide the value of nroot(a) and n:"<<endl;
		cout<<" "<<endl;
		cin>>a>>n;
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
			
		 for(int i = 0; i < 1000; i++) {x = 1/n * ( x*(n-1)  + a/ pow(x,n-1) );};
			cout<<"The approximate "<<n<<"root of "<<a<<" is:"<<endl;
			cout<<" "<<endl;
			printf ("%10.30f", x);
			cout<<" "<<endl;
			printf ("\nPress any button to continue.");
			getch();
			goto start;			
}
