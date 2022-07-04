// write  a program to find out t he largest and smallest of 3- numbers.
#include<iostream.h>
#include<conio.h>
void main() {
	int a,b,c;
	cout<<"enter the a value ";
	cin>>a;
	cout<<"enter the b value ";
	cin>>b;
	cout<<"enter the c value ";
	cin>>c;
	if (a>b) && (a>c) {
	cout<<"a is greater.";
	}
	else if (b>a)&&(b>c){
	cout<<"b is greater.";
	}
	else {
	cout<<"c is greater.";
	}
getch();
}
