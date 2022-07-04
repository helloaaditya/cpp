#include <iostream.h>
#include <conio.h>
inline int cube(int a){
return(a*a*a);
}
void main(){
int a;
cout<<"\n enter the valur of length in cm:";
cin>>a;
int volume=cube(a);
cout<<"\n the volume of the cube is"<<volume<<"cm3";
getch();
}
