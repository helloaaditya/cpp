//Write a program to calculater app.
#include<iostream.h>
#include<conio.h>
void main() {
	int a,b,ch;
	cout<<"1.addition \n"; "2.substraction \n"; "3.multiply\n"; "4.division\n";
	cout<<"enter the ch value";
	cin>>ch;
	cout<<"enter the a value";
	cin>>a;
	cout<<"enter the b value";
	cin>>b;
	switch (ch) {
	case 1:cout<<"sum ="<<a+b;
	break;
	case 2:cout<<"sub ="<<a-b;
	break;
	case 3:cout<<"mul ="<<a*b;
	break;
	case 4:cout<<"div ="<<a/b;
	break;
	default:cout<<"invalid option \n "; "please enter again";
getch();
}