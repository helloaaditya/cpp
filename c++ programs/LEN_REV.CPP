#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
clrscr();
char str1[10],str2[10];
int length;
cout<<"\n enter a string with size below 10:";
cin>>str1;
strcpy (str2,str1);
cout<<"\n the string after coping is :"<<str2;
length=strlen(str1);
cout<<"\n length of the string "<<str1<<"is"<<length;
strrev(str2);
cout<<

