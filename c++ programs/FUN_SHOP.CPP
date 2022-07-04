#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

static int c;
class items{
int itemcode[50];
char itemname[20];
float price[50];
public:
void getitem(void);
void display(void);
void remove(void);
};
void items::getitem(){
cout<<"enter the item code:";
cin>>itemcode[c];
cout<<"enter the price:";
cin>>price[c];
c++;
}
void items::display(){
int sum=0;
cout<<"\n price list\n";
cout<<"\n\t item code "<<"\t item price";
for(int i=0;i<c;i++){
cout<<"\t"<<itemcode[i]<<"\t"<<"\t"<<price[i]<<"\n";
sum=sum+price[i];
}
cout<<"\ntotal price\t"<<sum;
}
void items::remove(){
int a;
cout<<"enter the item code:";
cin>>a;
for(int i=0;i<c;i++){
if(itemcode[i]==0);
price[i]=0;
}
cout<<"\n";
}
void main(){
clrscr();
items order;
int x;
for(;;){
cout<<"\n choose from thr following \n";
cout<<"\n1.add an item";
cout<<"\n2.display the bill";
cout<<"\n3.remove an item";
cout<<"\n4.quit";
cout<<"\n enter your choice:";
cin>>x;
switch(x){
case 1:order.getitem();
break;
case 2:order.display();
break;
case 3:order.remove();
break;
case 4:exit(0);
break;
default : cout<<"\n chech the inut";
break;
}
}
getch();
}


