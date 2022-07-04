#include<iostream.h>
#include<conio.h>
void main(){
int a[10][10],b[10][10],sum[10][10];
int i,j,m,n;
cout<<"enter the size os matrix:";
cin>>m>>n;
cout<<"\n"<<" enter the element of first matrix:"<<"\n";
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cin>>a[i][j];
}
}
cout<<"\n"<<" enter the element of second matrix:"<<"\n";
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cin>>b[i][j];
}
}
cout<<"\n"<<"sum of two matrix:"<<"\n";
for(i=0;i<m;i++){
for(j=0;j<n;j++){
sum[i][j]=a[i][j]+b[i][j];
cout<<sum[i][j]<<" ";
}
}
cout<<"\n";
getch();
}