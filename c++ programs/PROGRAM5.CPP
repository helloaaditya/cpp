#include<iostream.h>
#include<conio.h>
void main(){
	char ch;
	cout<<"enter a alphabet";
	cin>>ch;
	switch(ch){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':cout<<"is vovel";
	break;
	default:
	cout<<"not a vovel";
	}
	getch();
	}