#include <iostream.h>
#include <conio.h>
class matrix2;
class matrix1{
int a[10][10];

public:
void getvalues(int m, int n){
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cin>>a[i][j];}}}

friend void matrixsum(matrix1,matrix2,int,int);
};

class matrix2{
int b[10][10];

public:
void getvalues(int m, int n){

for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
cin>>b[i][j];
}}
friend void matrixsum(matrix1,matrix2,int,int);
};
void matrixsum(matrix1 m1,matrix2 m2,int m,int n){
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<m1.a[i][j]+m2.b[i][j]<<" ";
	}
	cout<<"\n";
	}
}


void main()
{clrscr();
int m,n;
matrix1 m1;
matrix2 m2;
cout<<"\nEnter number of rows:";
cin>>m;
cout<<"\nEnter number of columns:";
cin>>n;
m1.getvalues(m,n);
m2.getvalues(m,n);
matrixsum(m1,m2,m,n);
getch();
}