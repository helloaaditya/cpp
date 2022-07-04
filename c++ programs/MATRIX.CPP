#include<iostream.h>
#include<conio.h>
void main(){
int a[10][10];
int m,n,i,j;
cout<<"Enter the no. of rows:";
cin>>m;
cout<<"Enter the no. of cols:";
cin>>n;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
cout<<"a["<<i+1<<"]"<<"["<<j+1<<"]";
cin>>a[i][j];
}
}
cout<<"print the matrix\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
cout<<a[i][j]<<"\n";
cout<<"\n";
}
}
getch();
}
