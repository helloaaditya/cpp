#include <iostream.h>
#include <conio.h>
void swap (int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void main(){
clrscr();
int a,b;
cout<<"enter the volue of a and b:";
cin>>a>>b;
cout<<"\n the value of a and b before the function call\n"<<"\na="<<a<<"\nb="<<b;
cout<<"\n after swapping the value\n";
swap(&a,&b);
cout<<"\n a"<<a;
cout<<"\n b"<<b;
getch();
}