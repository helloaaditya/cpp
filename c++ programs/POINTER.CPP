#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int k=5;
int *a;
a=&k;
cout<<"the address of a is:"<<&k<<"\n";
cout<<"the value of a is :"<<*a<<"\n";
cout<<"the address of a is:"<<a<<"\n";
getch();
}