#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,n,loc=-1;
clrscr();
cout<<"Enter the array\n";
for(i=0;i<=5;i++)
cin>>a[i];
cout<<"Enter the element to be searched\n";
cin>>n;
for(i=0;i<=5;i++)
{
if(n==a[i]){
loc=loc+1;
break;
}
}
if(loc>=0)
cout<<n<"is found at"<<loc+1;
else
cout<<"Enter not fount";
getch();
}
cout<<"