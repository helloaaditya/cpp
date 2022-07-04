#include <iostream.h>
#include <conio.h>
class Sample{
int x,y;
public:
Sample(int a, int b){
x=a;y=b;
}
Sample(Sample &s){
x=s.x;
y=s.y;
}
void print(){
cout<<"\n x"<<x;
cout<<"\n y"<<y;
}
};
void main(){
clrscr();
Sample s1(20,30);
s1.print();
Sample s2(s1);
cout<<"\n copy constructor values:";
s2.print();
getch();
}

