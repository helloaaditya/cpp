#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,n1,n2,i;
n=0;n1=1;
for(i=0;i<10;i++)
{
n2=n+n1;
cout<<n2<<" ";
n=n1;
n1=n2;
}
getch();
}