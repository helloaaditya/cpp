#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

float area();
float area(float);
int area(int,int);

void main(){
int length,breath;
clrscr();
for(;;){
cout<<"\n To find the area ,choose from the below iteam :";
cout<<"\n 1.circle";
cout<<"\n 2.cube";
cout<<"\n 3.rectrangle";
cout<<"\n 4.exit";
cout<<"\n enter your choice:";
int choice;
switch(choice){
case 1:cout<<"\n the area of the circle is :"<<area();
break;
case 2:cout<<"\n enter the lenght of the side of cube :";
	float a;
	cin>>a;
cout<<"\n the area of the cube:"<<area(a);
break;
case 3:cout<<"\n enter the length and breath of ractangle :";
cin>>length >>breath;
cout<<"the area of the ractangle:"<<area(length,breath);
break;
case 4:exit(0);
default :cout<<"\n invalid input";
}
}
}
getch();

float area(){
float radius, circle;
cout<<"enter the radius:";
cin>>radius;
circle=3.14*radius*radius;
return circle;
}
float area(float a){
return(a*a*a);
}
int area(int l,int b){
return (l*b);
}