#include <iostream.h>
#include <conio.h>
#include <string.h>
void main(){
clrscr();
char str[10],str1[10];
int length,flag;
cout<<"\enter the string with size not maore than 10:";
cin>>str;
length=strlen(str);
cout<<"length="<<length<<"\n";
for(int i=0;i<length;i++){
if(str[i]==str[length-1-i]){
flag=1;
}
else{
flag=0;
break;
}
}
if(flag==1)
cout<<"the string "<<str<<"is a palindrome";
else
cout<<"the string "<<str<<"is not a polindrome";
getch();
}