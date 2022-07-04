#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
 float area();
 float area(float);
 int area (int,int);
 void main() {
 int length,breath;
 clrscr();
 for(; ;){
 cout<<"to find the area ,choose from the below iteam \n";
 cout<<"1.circle \n";
 cout<<"2.cube \n";
 cout<<"3.rectangle \n";
 cout<<"4.exit";
 cout<<"enter your choice \n";
 int choice;
 cin>>choice;
 switch(choice){
 case 1:cout<<"the area of the circle is "<<area();
 break;
 case 2:cout<<"enter the length of side of the cube \n";
 float a;
 cin>>a;
 cout<<"the area of the cube is:"<<area(a);
 break;
 case 3:cout<<"enter the length and breath of the cube \n";
 cin>>length>>breath;
 cout<<"the area of the rechangal is "<<area(length,breath);
 break;
 case 4:exit(0);
 default : cout<<"invalide entry";
 }
 }
 getch();
 }
 float area(){
 float radius,circle ;
 cout<<"enter the radius:";
 cin>>radius;
 circle = 3.14*radius*radius;
 return circle;
 }
 float area(float a){
 return(a*a*a);
 }
 int area(int l, int b){
 return (l*b);
 }


